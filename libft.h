/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpringau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:50:10 by jpringau          #+#    #+#             */
/*   Updated: 2017/11/13 14:02:30 by jpringau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_strlen(const char *str);
char	*ft_strdup(char *s1);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, size_t n);
char	*ft_strlcat(char *dst, char *src, size_t size);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(const char *src, const char *obj);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_itoa(int n);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	**ft_strsplit(char const *s, char c);
#endif
