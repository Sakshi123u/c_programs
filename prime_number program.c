//program to check wether the number is prime or not
#include<stdio.h>
int main(){
    int n,flag=0,i;
    printf("enter number");
    scanf("%d",&n);
    if(n==0 || n==1){
        flag=1;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }
    return 0;
}