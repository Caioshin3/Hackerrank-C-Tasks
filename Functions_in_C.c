#include <stdio.h>
#include <stdlib.h>

void max_of_four (int w,int x,int y,int z){
if((w>x)&&(w>y)&&(w>z)){
printf("%d",w);
}else if((x>w)&&(x>y)&&(x>z)){
printf("%d",x);
}else if((y>w)&&(y>x)&&(y>z)){
printf("%d",y);
}else if((z>w)&&(z>x)&&(z>y)){
printf("%d",z);
}
}
int main () {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four(a, b, c, d);

    return 0;
}
