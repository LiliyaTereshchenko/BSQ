/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:09:48 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/05 13:35:03 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 4096

//int     ft_atoi(char *str);
//int     count_digits(int d);
char	*ft_read_file(int fd)
char	*add_memory_concat_str(char *s1, char *s2)
int		ft_strlen(char *str)
#endif

