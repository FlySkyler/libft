/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:25:15 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/13 12:36:50 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long int	t_size;
int							ft_isalnum(int c);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
t_size						ft_strlen(const char *str);
void						*ft_memset(void *b, int c, t_size len);
void						ft_bzero(void *s, t_size n);
void						*ft_memcpy(void *dst, const void *src, t_size n);
void						*ft_memmove(void *dst, const void *src, t_size len);
t_size						ft_strlcpy(char *src, const char *dst, t_size n);
t_size						ft_strlcat(char *src, const char *dest, t_size n);
int							ft_toupper(int c);
int							ft_tolower(int c);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
int							ft_strncmp(const char *s1, const char *s2,
								t_size n);
void						*ft_memchr(const void *s, int c, t_size n);
void						ft_bzero(void *s, t_size n);
int							ft_atoi(const char *nptr);
int							ft_memcmp(const void *ptr1, const void *ptr2,
								t_size num);
char						*ft_strnstr(const char *big, const char *little,
								t_size len);
char						*ft_strdup(const char *s);
char						*ft_substr(const char *str, unsigned int start,
								t_size len);
char						*ft_strjoin(const char *s1, const char *s2);
void						*ft_calloc(t_size count, t_size size);
char						*ft_itoa(int n);
void						ft_putstr_fd(char *s, int fd);
void						ft_putnbr_fd(int n, int fd);
void						ft_putchar_fd(char c, int fd);
char						*ft_strtrim(const char *s1, const char *set);
#endif