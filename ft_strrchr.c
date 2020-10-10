char *ft_strrchr (const char *str, int c)
{
  size_t len;

  len = ft_strlen(str);

  while(len--)
    if(str[len] == c)
      return ((char *)str + len);
  return 0;
}
