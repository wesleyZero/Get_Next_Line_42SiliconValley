/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohanso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 12:56:42 by wjohanso          #+#    #+#             */
/*   Updated: 2019/12/25 12:31:28 by wjohanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			diff;

	diff = 0;
	i = 0;
	if (n == 0)
		return (0);
	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == *s2)
			return (0);
		return ((unsigned char)*s1 - *s2);
	}
	while (s1[i] != '\0' && s2 != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (diff);
}
