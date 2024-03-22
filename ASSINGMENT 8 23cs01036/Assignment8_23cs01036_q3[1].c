#include<stdio.h>
void reverse(int *a,int index,int i){
    if(index<0){
        return;
    }
        printf(" %d",*(a+i));
        reverse(a,index-1,i-1);
}
int main(){
    int b[20], *p,i,size;
    p=b;
    printf("\nEnter size of array:");
    scanf(" %d",&size);
    for(i=0;i<size;i++){
        printf("Enter element:");
        scanf(" %d",(p+i));
    }
    reverse(p,size-1,size-1);
    return 0;
}