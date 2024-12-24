#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;
void print(struct node*ptr){
    printf("the list is: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node*create_node(int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
void insert_at_beginning(int data){
    struct node*ptr=create_node(data);
    ptr->next=head;
    head=ptr;
}
void insert_in_between(int data, int index){
    struct node*ptr1=create_node(data);
    if(index==1){
        ptr1->data=data;
        ptr1->next=head;
        head=ptr1;
    }
    struct node*ptr2=head;
    for(int i=0;i<index-2;i++){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){
        printf("invalid position");
        free(ptr2);
        return;
    }
    ptr1->next=ptr2->next;
    ptr2->next=ptr1;
}
void insert_at_end(int data){
    struct node*ptr1=create_node(data);
    if(head==NULL){
        head=ptr1;
        return;
    }
    struct node*ptr2=head;
    for(ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next){}
    ptr2->next=ptr1;
    ptr1->next=NULL;
}
int main(){
    int choice,n,x,index;
    while (1) { // Infinite loop for the menu
        printf("\nWhat operation would you like to perform?\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert in between\n");
        printf("4. delete beginning element\n");
        printf("5. delete element from between\n");
        printf("6. delete the last element\n");
        printf("7. Print the list\n");
        printf("8. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("enter number of elements: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                printf("enter the number: ");
                scanf("%d",&x);
                insert_at_beginning(x);
            }
            print(head);
            break;
            case 2:
                printf("Enter the number: ");
                scanf("%d", &x);
                insert_at_end(x);
                print(head);
                break;
        }
    }
}