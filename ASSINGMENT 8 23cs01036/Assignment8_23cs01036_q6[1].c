#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
       int n1,n2,n3,i,j;
       char *c,*d,*e;
       printf("\nEnter size of 1st string:");
       scanf(" %d",&n1);
       printf("\nEnter size of 2nd string:");
       scanf(" %d",&n2);
       n3=n1+n2;
       c=(char*)malloc(n1*(sizeof(char)));
       char s1[n1];
       printf("\nEnter string1:");
       scanf(" %s",s1);
       d=(char*)malloc(n2*(sizeof(char)));
       char s2[n2];
       printf("\nEnter string2:");
       scanf(" %s",s2);
       e=(char*)malloc(n3*(sizeof(char)));
       char s3[n3];
       for(i=0;i<n1;i++){
              s3[i]=s1[i];
       }
       for(j=0;j<n2;j++){
              s3[n1+j]=s2[j];
       }
       puts(s3);
       free(c);
       free(d);
       free(e);
       c = NULL;
       d = NULL;
       e = NULL;
       return 0;
}