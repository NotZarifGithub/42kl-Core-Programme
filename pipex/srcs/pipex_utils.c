/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:30:29 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/09/26 19:30:30 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void error_handler(int num) 
{
  if (num == 1)  
    ft_putstr_fd("Invalid number of arguments\n./pipex infile cmd cmd outfile\n");
  exit(0);
}

void free_mem(char **array)
{
  size_t i;

  i = 0;
  if (!array)
    return;
  while (array[i])
  {
    free(array[i]);
    i++;
  }
  free(array);
}

char *my_getenv(const char *env_name, char **envp)
{
  int i;
  size_t env_name_len;

  i = 0;
  env_name_len = ft_strlen(env_name);
  while (envp[i])
  {
    if (ft_strncmp(envp[i], env_name, env_name_len) == 0 && envp[i][env_name_len] == '=')
      return &envp[i][env_name_len + 1];
    i++;
  }
  return (NULL);
}

char *find_path(char *command, char **env)
{
  char **dir;
  char *full_path;
  char *temp_dir;
  int i;

  dir = ft_split(my_getenv("PATH", env), ':');
  if (!dir)
    return (NULL);
  i = 0;
  while (dir[i])
  {
    temp_dir = ft_strjoin(dir[i], "/");
    full_path = ft_strjoin(temp_dir, command);
    free(temp_dir);
    if (access(full_path, F_OK | X_OK) == 0)
    {
      free_mem(dir);
      return (full_path);
    }
    free(full_path);
    i++;
  }
  free_mem(dir);
  return (NULL);
}

int open_file(char *file_path, int input_output)
{
  int fd;

  if (input_output == 0)
    fd = open(file_path, O_RDONLY);
  else if (input_output == 1)
    fd = open(file_path, O_WRONLY | O_CREAT | O_TRUNC, 0777);  
  if (fd == -1)
  {
    perror("Failed to open file");
    exit(0);
  }
  return (fd);
}
