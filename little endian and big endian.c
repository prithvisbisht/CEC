/* 
   Write a C program to find out if the underlying 
   architecture is little endian or big endian. 
 */
 
#include <stdio.h>
int main ()
{
  unsigned int x = 0x76543210;// 0x is used to save the vale in hexadecimal
  char *c = (char*) &x;
 
  printf (" *c is: 0x%x\n", *c);
  if (*c == 0x10)
  {
    printf ("little endian. \n");
  }
  else
  {
     printf ("big endian. \n");
  }
 
  return 0;
}