//check whether the given number is palindrome or not
#include<stdio.h>
int main(){
    int n,sum=0,re,temp;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        re=n%10;
        sum=sum*10+re;
        n=n/10;
    }
    if(sum==temp){
        printf("it is a palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}