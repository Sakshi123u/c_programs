//write a program to find gcd of two numbers
#include<stdio.h>
int main(){
    int n1,n2,gcd,i;
    printf("enter n1=");
    scanf("%d",&n1);
    printf("enter n2=");
    scanf("%d",&n2);
    for(i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("gcd of %d and %d = %d",n1,n2,gcd);
    return 0;
}