#include <ffi_pl.h>

extern EXPORT int
return_passed_integer_value(int input)
{
  return input;
}

extern EXPORT int
add_integer_value(int a, int b)
{
  return a + b;
}

extern EXPORT int
sum_integer_values10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
}