/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaudez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 14:43:02 by tblaudez          #+#    #+#             */
/*   Updated: 2018/08/23 16:47:19 by tblaudez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, int start, size_t len)
{
	char	*str;

	if (!s || !len)
		return (NULL);
	str = ft_strnew(len);
	str = ft_strncpy(str, s + start, len);
	return (str);
}
