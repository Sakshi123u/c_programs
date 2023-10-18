#include<stdio.h>
#include<string.h>
struct employee{
    int eno;
    char name [50];
    float salary;
};
int main(){
    struct employee e={100,"kartik",50000};
    printf("enter employee details\n");
     printf("%d\n",e.eno);
    printf("%s\n",e.name);
     printf("%f\n",e.salary);
    return 0;
}