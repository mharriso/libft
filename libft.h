#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
//delete
#include <stdint.h>
#include <stdio.h>
#include <string.h>

//libc funcs

size_t	ft_strlen(const char *s);
void *ft_calloc( size_t number, size_t size );
void ft_bzero(void * s , size_t  n );
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char * ft_strnstr(const char *big, const char *little, size_t len);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dest, const void *source, size_t count);
void *ft_memccpy(void *dest, const void *source, int c, size_t count);
int ft_memcmp(const void *buf1, const void *buf2, size_t count);
void *ft_memchr(const void *arr, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t n);
int     ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

//additional funcs

char **ft_split(char const *s, char c);
char **ft_split_copy(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

//bonus funcs

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int ft_isspace(int c);

#endif
