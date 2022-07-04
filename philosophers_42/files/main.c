/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:26:37 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/18 17:03:26 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	shortness( t_all *s, int i, char **av, int ac)
{
	s[i].number_of_philosophers = ft_atoi(av[1]);
	s[i].time_to_die = ft_atoi(av[2]);
	s[i].time_to_eat = ft_atoi(av[3]);
	s[i].time_to_sleep = ft_atoi(av[4]);
	if (s[i].time_to_die <= 60 || s[i].time_to_eat <= 60
		|| s[i].time_to_sleep <= 60)
		return (1);
	s[i].t_start = ft_time();
	if (ac == 6)
		s[i].num_must_eat = ft_atoi(av[5]);
	else
		s[i].num_must_eat = -1;
	s[i].last_meal = s[i].t_start;
	s[i].meal_cnt = 0;
	s[i].who = i + 1;
	return (0);
}

int	main(int ac, char **av)
{
	t_all	*s;
	int		i;

	if (arg_check(ac, av) == 0 || ft_atoi(av[1]) == 0)
		return (1);
	s = malloc(sizeof(t_all) * ft_atoi(av[1]));
	if (!(s))
		return (1);
	i = 0;
	while (i < ft_atoi(av[1]))
	{
		pthread_mutex_init(&s[i].fork, NULL);
		if (i != 0)
			s[i].fork2 = &s[i - 1].fork;
		else
			s[i].fork2 = NULL;
		if (shortness(s, i, av, ac))
		{
			printf("drugie kombinacii nabirai!\n");
			return (1);
		}
		i++;
	}
	philos(s);
	return (0);
}
