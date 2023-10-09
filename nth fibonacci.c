//calculate nth fibonacci without recurssion
#include<stdio.h>
//create function to calculate nth fibonacci
int fib(int n){
    int a=0,b=1,c,i;//declaring variables
    if(n==0){
        return a;
    }
    //using for loop to check condition
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("nth fibonacci is %d",fib(n));
    return 0;
}
