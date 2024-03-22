#include<stdio.h>

void circshft(int a,int b,int c,int*x,int*y,int*z){
    *x = c;
    *y = a;
    *z = b;
}

int main(){
    int x,y,z;
    printf("Enter x = ");
    scanf(" %d",&x);
    printf("Enter y = ");
    scanf(" %d",&y);
    printf("Enter z = ");
    scanf(" %d",&z);
    circshft(x,y,z,&x,&y,&z);
    printf("x=%d y=%d z=%d",x,y,z);
    return 0;
}