#include<stdio.h>
int main(){
    int bio,chem,maths,phy,comp;
    float per;
    printf("insert marks of bio=");
    scanf("%d",&bio);
    printf("insert marks of chem=");
    scanf("%d",&chem);
    printf("insert marks of phy=");
    scanf("%d",&phy);
    printf("insert marks of comp=");
    scanf("%d",&comp);
    printf("insert marks of maths=");
    scanf("%d",&maths);
    per=(bio+chem+phy+comp+maths)/5.0;
    printf("percentage = %.3f\n",per);
    if(per >=90){
        printf("grade A");
    }
    else if(per >= 80){
        printf("grade B");
    }
    else if(per >=70){
        printf("grade c");
    }
    else if(per >=60){
        printf("grade d");
    }
    else if(per >=40){
        printf("grade E");
    }
    else{
        printf("failed");
    }
    return 0;
}