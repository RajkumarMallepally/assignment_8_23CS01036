#include <stdio.h>
void NinetyDegree(int n,int arr1[n][n], int a)
{
    int i,j,k,m;
    for(m = 0; m<a; m++){
        for(i = 0; i<n; i++){
            for(j = i; j<n; j++){
                k = *(*(arr1 + i) + j);
                *(*(arr1 + i) + j) = *(*(arr1 + j) + i);
                *(*(arr1 + j) + i) = k;
            }
        }
        for(i = 0; i<n/2; i++){
            for(j = 0; j<n; j++){
                k = *(*(arr1 + i) + j);
                *(*(arr1 + i) + j) = *(*(arr1 + n-i-1) + j);
                *(*(arr1 + n-i-1) + j) = k;
            }
        }
    }
}
void main()
{
    int n;
    printf("enter the size of matrix : ");
    scanf(" %d", &n);
    int arr1[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++){
            printf("mat[%d][%d] = ",i+1,j+1);
            scanf(" %d", *(arr1+i)+j);
        }
    }
    int a;
    printf("Enter the number of times the matrix to be rotated(n) : ");
    scanf(" %d", &a);
    NinetyDegree(n,arr1,a);
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        printf("%d ", *(*(arr1+i)+j));
        printf("\n");
    }
}