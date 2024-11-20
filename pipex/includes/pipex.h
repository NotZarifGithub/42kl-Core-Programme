/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:47:14 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/09/26 17:47:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>

void	execute_command(char *command, char **env);
void	child_process(char **argv, int *pipe_fd, char **env);
void	parent_process(char **argv, int *pipe_fd, char **env);
int		main(int argc, char **argv, char **env);
void	error_handler(int num);
void	free_tab(char **array);
char	*my_getenv(const char *env_name, char **envp);
char	*find_path(char *command, char **env);
int		open_file(char *file_path, int input_output);

#endif
