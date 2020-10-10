char *ft_strchr (const char *str, int c)
{
  while(*str != c && *str)
    str++;
  return ((*str == c) ? (char *)str : 0);
}
