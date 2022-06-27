/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msevuk <msevuk@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:52:05 by msevuk            #+#    #+#             */
/*   Updated: 2022/02/20 01:52:05 by msevuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (c >= 127)
		return ((char *)s);
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
