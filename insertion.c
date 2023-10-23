#include<stdio.h>
int main(){
    int key ,i, j;//declaration
    int a[5]={9,8,5,4,2};
    for(i=1;i<5;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
         a[j+1]=key;
    }
    //sorted array
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;
}