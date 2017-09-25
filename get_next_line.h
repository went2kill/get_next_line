/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrobotko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 17:22:10 by yrobotko          #+#    #+#             */
/*   Updated: 2017/02/07 15:06:00 by yrobotko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "stdlib.h"
# include "string.h"
# include "libft/libft.h"

typedef struct			s_gnl
{
	char				*buff;
	int					fdiscriptor;
	struct s_gnl		*next;
}						t_gnl;

int						get_next_line(const int fd, char **line);
#endif
