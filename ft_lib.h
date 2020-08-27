#ifndef FT_LIB_H
# define FT_LIB_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

//int		ft_isalnum(int c);
int		ft_isalpha(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char **ft_split_copy(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);*/

#endif