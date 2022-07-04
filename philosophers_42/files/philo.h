/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbagg <dbagg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:36:05 by dbagg             #+#    #+#             */
/*   Updated: 2022/01/18 14:34:32 by dbagg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# include <pthread.h>
# include <signal.h>
# include <sys/wait.h>
# include <sys/time.h>

typedef struct s_all
{
	pthread_mutex_t	fork;
	pthread_mutex_t	*state;
	pthread_mutex_t	*meals;
	pthread_mutex_t	*fork2;
	int				number_of_philosophers;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	long			t_start;
	int				num_must_eat;
	long			last_meal;
	int				meal_cnt;
	int				who;
}					t_all;

int					arg_check(int ac, char **av);
void				ft_message(long time, int who, char *what);
long				ft_time(void);
void				ft_usleep(int length);
int					ft_atoi(char *str);
void				*meal_loop(void *ptr);
void				*death_loop(void *ptr);
void				*philosopher(void *ptr);
void				philos(t_all *s);

#endif
