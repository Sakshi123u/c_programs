#include<stdio.h>
int main(){
    int n,r,temp,sum; //declare of variable
    sum=0;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        sum = sum+r*r*r;
        n=n/10;
    }
    if(sum==temp){
        printf("it is palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}