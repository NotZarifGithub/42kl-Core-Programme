#include "./includes/libft.h" 

int print_str(char *str)
{
  int i;

  i = 0;
  if (str == NULL)   
  {
    write(1, "(null)", 6);
    return (6);
  }
  while (str[i] != '\0') 
  {
    write(1, str[i], 1); 
    i++;
  }
  return (i);
}
