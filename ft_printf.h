/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:00:37 by yulkazan          #+#    #+#             */
/*   Updated: 2021/02/01 21:51:08 by yulkazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_struct
{
	int			zero;
	int			minus;
	char		type;
	int			width;
	int			prec;
	int			count;
	int			neg;
	int			point;
}				t_struct;

char			*ft_itoa_base(size_t value, int base);
t_struct		ft_create_args(void);
int				ft_print_char(va_list *list, t_struct *args);
int				ft_print_string(va_list *list, t_struct *args);
int				ft_print_0x(void);
int				ft_print_zero_space(int count, char c);
char			*ft_str_lower(char **s);
int				ft_max(int a, int b);
int				ft_putstr_len(char *s, int length);
int				ft_is_flag(const char *s, int i, t_struct *args);
int				ft_is_type(const char *s, int i, t_struct *args);
int				ft_is_flag_type(va_list *l, const char *s, int i,
				t_struct *args);
long long		ft_print_num(size_t number, t_struct *args, int base);
int				ft_print_percent(t_struct *args);
int				ft_print_pointer(va_list *list, t_struct *args);
int				ft_is_prec(va_list *list, const char *s, int i, t_struct *args);
int				ft_print_type(va_list *list, t_struct *args);
int				ft_is_width(va_list *list, const char *s, int i,
				t_struct *args);
int				ft_write(const char *s, va_list *list);
int				ft_printf(const char *s, ...);

#endif
