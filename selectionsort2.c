#include<stdio.h>
int main(){
    int n,i,j,min,temp;
    printf("enter size of an array");
    scanf("%d",&n);
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        printf("enter number%d",i+1);
        scanf("%d",&a[i]);
    }
    //elements need to be sorted
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j>n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        //swap a[i] and a[min]
     temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
    //sorted array is
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}