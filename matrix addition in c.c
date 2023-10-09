#include<stdio.h>
int main(){
    int a[10][10],b[10][10],x[10][10],r,c,i,j;
    printf("enter rows=");
    scanf("%d",&r);
    printf("enter columns=");
    scanf("%d",&c);
    printf("enter first matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //perform matrix addition is
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            x[i][j]=a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("enter resultant matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d   ",x[i][j]);
        }
        printf("\n");
    }
    return 0;

}