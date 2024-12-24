#include<stdio.h>
#define MAX_SIZE 101
int a[MAX_SIZE];
int top=-1;
void push(int data){
    if(top==MAX_SIZE-1){
        printf("array overfolow");
        return;
    }
    top=top+1;
    a[top]=data;
}
void pop(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    top=top-1;
}
void print(){
    printf("stack: ");
    for(int i=0;i<=top;i++){
        printf("%d ",a[i]);
    }
}
int top_element(){
    if(top==-1){
        printf("stack is empty, no top element\n");
        return -1;
    }
    else return a[top];
}
int main(){
    int choice,n,x,t;
    while(1){
        printf("\nwhat operation would you like to perform?\n");
        printf("1.push an element in stack\n");
        printf("2.pop an element from the stack\n");
        printf("3.view the top elment of stack\n");
        printf("4.print all elements of the stack\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the number of elements to push in the stack: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
            printf("enter the element: ");
            scanf("%d",&x);
            push(x);
            }
            print();
            break;
            case 2:
            pop();
            printf("updated stack: ");
            print();
            break;
            case 3:
            t=top_element();
            if(t!=-1){
                printf("top element: ",t);
            }
            break;
            case 4:
            print();
        }
    }
}