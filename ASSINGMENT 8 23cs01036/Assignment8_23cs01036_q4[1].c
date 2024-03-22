#include<stdio.h>
void search(int *a,int max)
{  
  int i,rv,sum=0;
  for(i=0;i<max;i++){
  sum=sum+a[i];
  }
  rv=max*(max+1)/2;
  if(rv>=1&&rv<=max)
  printf("\n%d",rv);
  else
  printf("\nInvalid Input");
}

int main(){
  int b[50],x,n;
  printf("\n Enter number of elements:");
  scanf(" %d",&n);
  for(x=0;x<n;x++){
    printf("Enter element:");
    scanf(" %d",&b[x]);
  }
  search(b,n);
  return 0;
}