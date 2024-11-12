/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:31:32 by david-fe          #+#    #+#             */
/*   Updated: 2024/08/21 10:07:44 by david-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptrdup;
	int		slen;
	int		i;

	slen = ft_strlen((char *)src);
	ptrdup = (char *) malloc(sizeof(char) * (slen + 1));
	i = 0;
	if (ptrdup == NULL)
		return (NULL);
	while (i <= slen)
	{
		ptrdup[i] = src[i];
		i++;
	}
	ptrdup[i] = '\0';
	return (ptrdup);
}
/*
int	main(void)
{
	char	*str = "copy me!";

	printf("%s", ft_strdup(str));
}*/
