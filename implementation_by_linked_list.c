#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
struct node*create_node(int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
void push(int data){
    struct node*ptr=create_node(data);
        ptr->next=head;
        head=ptr;
    }
void pop(){
    if(head==NULL){
        printf("no elemnt in the stack, can't pop");
        return;
    }
    struct node*ptr=head;
    head=ptr->next;
    free(ptr);
}
int top(){
    if(head==NULL){
        printf("stack is empty, no top element");
        return -1;
    }
    printf("top element of the stack is: %d",head->data);
}
void print(struct node*ptr){
    printf("stack: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int choice,n,x,t;
    while(1){
        printf("\nwhat operation would you like to perform?\n");
        printf("1.push an element in stack\n");
        printf("2.pop an element from the stack\n");
        printf("3.view the top elment of stack\n");
        printf("4.print all elements of the stack\n");
        printf("5.quit\n");
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
            print(head);
            break;
            case 2:
            pop();
            printf("updated stack: ");
            print(head);
            break;
            case 3:
            top();
            break;
            case 4:
            print(head);
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}