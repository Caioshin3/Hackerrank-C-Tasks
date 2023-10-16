#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


struct Task
{
    int Int,Int2;
    float Float,Float2;
};
void Inteiro(int x,int y)
{
    int soma = x+y;
    int subtracao = x-y;
    printf("%d %d",soma,subtracao);
}
void Real(float x,float y)
{
    float soma = x+y;
    float subtracao = x-y;
    printf("\n%.1f %.1f",soma,subtracao);
}
int main ()
{
    struct Task tsk;
    scanf("%d %d",&tsk.Int,&tsk.Int2);
    scanf("%f %f",&tsk.Float,&tsk.Float2);
    Inteiro(tsk.Int,tsk.Int2);
    Real(tsk.Float,tsk.Float2);

    return 0;
}



