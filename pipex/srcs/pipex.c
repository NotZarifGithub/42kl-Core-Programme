/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:30:20 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/09/26 19:30:21 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h" 

void execute_command(char *command, char **env)
{
  char *str_cmd;
  char *path_cmd;

  str_cmd = ft_split(command, ' ');
  path_cmd = get_command_path(str_cmd, env);
  if (execv(path_cmd, str_cmd, env) == -1)
  {
    ft_putstr_fd("Failed to execute command", 2);
    perror(str_cmd[0]);
    free_tab(str_cmd);
    exit(0);
  }
}

void child_process(char **argv, int *pipe_fd, char **env)
{
  int fd;

  fd = open_file(argv[1], 0);
  dup2(fd, 0);
  dup2(pipe_fd[1], 1);
  close(pipe_fd[0]);
  execute_command(argv[2], env);
}

void parent_process(char **argv, int *pipe_fd, char **env)
{
  int fd;

  fd = open_file(argv[4], 1);
  dup2(fd, 1);
  dup2(pipe_fd[0], 0);
  close(pipe_fd[1]);
  execute_command(argv[3], env);
}

int main(int argc, char **argv, char **env)
{
  int pipe_fd[2];
  pid_t pid;

  if (argc != 5)
    error_handler(1); 
  if (pipe(pipe_fd) < 0)
  {
    perror("Failed to create pipe");
    exit(1);
  }
  pid = fork();
  if (pid < 0)
  {
    perror("Fork fail");
    exit(1);
  }
  if (pid == 0)
    child(argv, pipe_fd, env);
  parent(argv, pipe_fd, env);
}
