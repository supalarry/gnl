/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 09:52:01 by lskrauci      #+#    #+#                 */
/*   Updated: 2019/01/24 09:52:03 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# include "./libft/libft.h"

typedef struct		s_node
{
	int				fd;
	char			*store_buffer;
	char			read_buffer[BUFF_SIZE + 1];
	int				new_start;
	int				blocker;
	int				read_val;
	struct s_node	*next;
}					t_node;

int					get_next_line(const int fd, char **line);
#endif
