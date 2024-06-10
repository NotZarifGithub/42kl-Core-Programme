void *memcpy(void *dest, const void *src, size_t n)
{
  char *dest_ptr;
  const char *src_ptr;
  int i;

  dest_ptr = (char *)dest;
  src_ptr = (const char *)src;
  i = 0;

  while (n > i)
  {
    dest_ptr[i] = src_ptr[i];
    i++;
  }
  return (dest);
}
