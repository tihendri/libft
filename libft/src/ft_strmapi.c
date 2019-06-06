/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:51:23 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/06 14:25:34 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*string;

	n = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (s && f)
	{
		if (string == NULL)
		{
			return (NULL);
		}
		while (s[n] != '\0')
		{
			string[n] = f(n, s[n]);
			n++;
		}
	}
	string[n] = '\0';
	return (string);
}
