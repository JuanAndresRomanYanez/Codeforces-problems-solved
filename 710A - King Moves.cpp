#include <stdio.h>
char s[2];
int x,y;
int main() {
  scanf("%s", s);
  if (s[0] == 'a' || s[0] == 'h')x=2;
  else x=3;
  if (s[1] == '1' || s[1] == '8')y=2;
  else y=3;
  //eje x por eje y menos la posicion en la que esta el rey XD
  printf("%i\n", x*y-1);
}
