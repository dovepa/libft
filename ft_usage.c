/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalombo <dpalombo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:44:28 by dpalombo          #+#    #+#             */
/*   Updated: 2017/11/28 18:27:33 by dpalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_usage(char const *str)
{
	char const *stre;

	stre = "Usage : ";
	ft_putstr(stre);
	ft_putendl(str);
	return ;
}
