#include "./includes/libft.h"
#inclule "./includes/printf.h"

int print_int(int n)
{
  int len;
  char *num;

  len = 0;
  num = ft_itoa(n);
  len = ft_printstr(num);
  free(num);
  return len;
}

/*
int main(void)
{
  int result;

  result = print_int(123);
  printf("%d\n", result);
  return (0);
}
*/
