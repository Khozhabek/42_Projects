/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:35:55 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/18 14:33:17 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*meal_loop(void *ptr)
{
	t_all	*s;
	int		i;

	s = (t_all *)ptr;
	i = 0;
	if (s->num_must_eat != 0)
		pthread_mutex_lock(s->meals);
	while (s->num_must_eat != 0 && i < s->number_of_philosophers)
	{
		pthread_mutex_lock(s->meals);
		i++;
	}
	ft_message(s->t_start, 0, "Everyone has eaten enough !");
	pthread_mutex_unlock(s->state);
	return (NULL);
}

void	*death_loop(void *ptr)
{
	t_all	*s;

	s = (t_all *)ptr;
	while (1)
	{
		if (ft_time() - s->last_meal > s->time_to_die)
		{
			ft_message(s->t_start, s->who, "has died");
			pthread_mutex_unlock(s->state);
			return (NULL);
		}
		else if (s->num_must_eat != -1 && s->meal_cnt >= s->num_must_eat)
		{
			ft_usleep((float)s->who);
			pthread_mutex_unlock(s->meals);
			return (NULL);
		}
	}
	return (NULL);
}

void	*philosopher(void *ptr)
{
	pthread_t	tid;
	t_all		*s;

	s = (t_all *)ptr;
	pthread_create(&tid, NULL, death_loop, s);
	if (s->who % 2 == 0)
		ft_usleep((float)s->time_to_eat * 0.9 + 1);
	while (s->num_must_eat == -1 || s->num_must_eat > s->meal_cnt)
	{
		pthread_mutex_lock(&s->fork);
		ft_message(s->t_start, s->who, "has taken a fork");
		pthread_mutex_lock(s->fork2);
		ft_message(s->t_start, s->who, "has taken a fork");
		s->last_meal = ft_time();
		ft_message(s->t_start, s->who, "is eating");
		ft_usleep(s->time_to_eat);
		pthread_mutex_unlock(&s->fork);
		pthread_mutex_unlock(s->fork2);
		s->meal_cnt++;
		ft_message(s->t_start, s->who, "is sleeping");
		ft_usleep(s->time_to_sleep);
		ft_message(s->t_start, s->who, "is thinking");
	}
	return (NULL);
}

void	philos(t_all *s)
{
	pthread_mutex_t	state;
	pthread_mutex_t	meals;
	pthread_t		tid;
	int				i;

	s[0].fork2 = &s[s[0].number_of_philosophers - 1].fork;
	pthread_mutex_init(&state, NULL);
	pthread_mutex_init(&meals, NULL);
	pthread_mutex_lock(&state);
	i = 0;
	while (i < s[0].number_of_philosophers)
	{
		s[i].state = &state;
		s[i].meals = &meals;
		pthread_create(&tid, NULL, philosopher, &s[i++]);
	}
	if (s[0].num_must_eat > -1)
		pthread_create(&tid, NULL, meal_loop, &s[0]);
	pthread_mutex_lock(&state);
	i = 0;
	while (i < s[0].number_of_philosophers)
		pthread_mutex_destroy(&s[i++].fork);
	pthread_mutex_destroy(&state);
	pthread_mutex_destroy(&meals);
	free(s);
}
