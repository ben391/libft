/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: befuhro <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/16 13:40:37 by befuhro      #+#   ##    ##    #+#       */
/*   Updated: 2018/01/16 13:40:38 by befuhro     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!(dst = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i <= size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}