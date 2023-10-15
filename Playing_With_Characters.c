#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Task{
char ch;
char s[100];
char sen[100];
};

int main (){
struct Task tsk;

scanf("%c",&tsk.ch);
scanf("%s",tsk.s);
while(getchar()!='\n');
fgets(tsk.sen,100,stdin);

printf("%c\n",tsk.ch);
printf("%s\n",tsk.s);
printf("%s",tsk.sen);
}
