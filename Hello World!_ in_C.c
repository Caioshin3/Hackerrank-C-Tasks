#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
char s[100];
fgets(s,100,stdin);
char c[20] = "Hello, World!";
printf("%s",c);
printf("\n%s",s);
return 0;
}
