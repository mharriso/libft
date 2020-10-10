#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

//libc funcs

size_t	ft_strlen(const char *s);
void *ft_calloc( size_t number, size_t size );
void ft_bzero(void * s , size_t  n );
char *ft_strchr (const char *str, int ch);
char *strrchr (const char *str, int ch);
void	*ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dest, const void *source, size_t count);
void *ft_memccpy(void *dest, const void *source, int ch, size_t count);
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

#endif
