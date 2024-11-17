/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <antbonin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:25:15 by antbonin          #+#    #+#             */
/*   Updated: 2024/11/17 16:01:50 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int							ft_isalnum(int c);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
size_t						ft_strlen(const char *str);
void						*ft_memset(void *b, int c, size_t len);
void						ft_bzero(void *s, size_t n);
void						*ft_memcpy(void *dst, const void *src, size_t n);
void						*ft_memmove(void *dst, const void *src, size_t len);
size_t						ft_strlcpy(char *src, const char *dst, size_t n);
size_t						ft_strlcat(char *src, const char *dest, size_t n);
int							ft_toupper(int c);
int							ft_tolower(int c);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
int							ft_strncmp(const char *s1, const char *s2,
								size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
void						ft_bzero(void *s, size_t n);
int							ft_atoi(const char *nptr);
int							ft_memcmp(const void *ptr1, const void *ptr2,
								size_t num);
char						*ft_strnstr(const char *big, const char *little,
								size_t len);
char						*ft_strdup(const char *s);
char						*ft_substr(const char *str, unsigned int start,
								size_t len);
char						*ft_strjoin(const char *s1, const char *s2);
void						*ft_calloc(size_t count, size_t size);
char						*ft_itoa(int n);
void						ft_putstr_fd(char *s, int fd);
void						ft_putnbr_fd(int n, int fd);
void						ft_putchar_fd(char c, int fd);
char						*ft_strtrim(const char *s1, const char *set);
void						ft_putendl_fd(char *s, int fd);
char						**ft_split(char *str, char c);
char						*ft_strmapi(const char *s, char (*f)(unsigned int,
									char));
char						*ft_striteri(char *s, void (*f)(unsigned int,
									char *));
#endif