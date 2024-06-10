void *ft_memset(void *str, int c, size_t len)
{
  unsigned char *p;

  p = (unsigned char *)str;
  while (len > 0)  
  {
    *p = (unsigned char)c;
    p++;
    len--;
  }
  return (str)
}
