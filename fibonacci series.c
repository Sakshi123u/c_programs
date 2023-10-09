//fibonacci series
#include<stdio.h>
int main(){
    int n1,n2,n3,i,n;
    n1=0;
    n2=1;
    printf("enter number");
    scanf("%d",&n);
    printf("%d%d",n1,n2);
    //using forloop
    for(i=2;i<n;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
    }
    return 0;
}