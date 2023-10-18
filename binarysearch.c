#include<stdio.h>
int main(){
    int low,high,mid,n,ele;
    ele=4;
    printf("enter size of an array");
    scanf("%d",&n);
    int a[n];
    //for inserting number in an array
    for(int i=0;i<n;i++){
        printf("enter number%d =",i+1);
        scanf("%d",&a[i]);
    }
    low=0;
    high=n-1;
    while(low<=high){
        a[mid]=(low+high)/2;
        if(a[mid] >ele){
            high=mid-1;
        }
        else if(a[mid]<ele){
            low=mid+1;
        }
        else if(a[mid]==ele){
            printf("found %d",a[mid]);
        }
    }
}