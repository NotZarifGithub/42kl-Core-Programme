void *memchr(const void *str, int c, size_t n)
{
  unsigned char *str_ptr;
  int i;

  str_ptr = (unsigned char *)str;
  i = 0;
  while (n > i)
  {
    if (str_ptr[i] == (unsigned char)c)
      return (&str_ptr[i]);
    i++;
  }
  return (NULL);
}
