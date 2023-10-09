//calculate fibonacci with recurssion
#include<stdio.h>
int fib(int n){
    //base condition
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   else{
    return  fib(n-1)+fib(n-2);
   }
}
//in main function
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("nth fibonacci is %d",fib(n));
    return 0;
}