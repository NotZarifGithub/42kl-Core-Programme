void *ft_memmove(void *dest, const void *src, size_t n)
{
  char *dest_ptr;
  const char *src_ptr;
  int i;

  dest_ptr = (char *)dest;
  src_ptr = (const char *)src;
  i = n - 1;

  if (dest_ptr > src_ptr && dest_ptr < src_ptr + n)
  {
    while (i >= 0)    
    {
      dest_ptr[i] = src_ptr[i];
      i--;
    }
  }
  else
    ft_memcpy(dest, src, n);
  return (dest);
}
