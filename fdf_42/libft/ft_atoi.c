/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:31:13 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/09 21:41:01 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int		i;
	int		znak;
	long	chislo;

	i = 0;
	znak = 1;
	chislo = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			znak = znak * (-1);
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (chislo < 0)
		{
			if (znak > 0)
				return (-1);
			return (0);
		}
		chislo = (chislo * 10) + (s[i++] - '0');
	}
	return (chislo * znak);
}
