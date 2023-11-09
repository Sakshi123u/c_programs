#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack_a[max];
int top=-1;
int is_full(){
    if(top==max-1){
        return 1;
    }else{
        return 0;
    }
}
int is_empty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void add_item(int data){
    if(is_full()){
        printf("items cannot be added!");
    }
    else{
        top=top+1;
        stack_a[top]=data;
    }
}
int remove_item(){
    if(is_empty()){
        printf("item is not present in cart!");
    }
    else{
        int value;
        value=stack_a[top];
        top=top-1;
        return value;
    }
}
int peek(){
    if(is_empty()){
        printf("no more item can be added");
    }
    else{
        return stack_a[top];

    }
}
void print(){
    int i;
    if(is_empty()){
        printf("no item to remove");
    }
    for(i=top;i>=0;i--){
        printf("%d",stack_a[i]);
        printf("\n");
    }
}
int main(){
    int data;
    int choice;
    while(1){
        printf("1add_item\n");
        printf("2remove_item\n");
        printf("3PeeK\n");
        printf("4all items\n");
        printf("5quite\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("item to be added");
            scanf("%d",&data);
             case 2:
           data=remove_item();
           break;
           case 3:
           printf("top most item");
           scanf("%d",peek());
           break;
           case 4 :
           print();
           break;
           case 5 :
           exit(1);
           default :
           printf("wrong choice\n");
        }
      }
      return 0;
}