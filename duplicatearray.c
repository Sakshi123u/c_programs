#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter size of an array");
    scanf("%d",&n);
    int a[n];
    //enter elements in an array
    for(i=0;i<n;i++){
        printf("enter number%d",i+1);
        scanf("%d",&a[i]);
    }
    //checking for duplicate elements in an array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                //delete the current position of an duplicate element
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                //decrease the size of array after removing duplicate
                n--;
                //if position of element is shifted decremente j
                j--;
            }
        }
    }
    //display array after removing the duplicates
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}