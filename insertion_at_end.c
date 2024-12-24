#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL;
struct node*create_node(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void insert_at_end(int data){
    struct node*ptr1=create_node(data);
    if(head==NULL){
        head=ptr1;
        return;
    }
    struct node*ptr2;
    for(ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next){
    }
    ptr2->next=ptr1;
    ptr1->prev=ptr2;
}
void print(struct node* ptr) {
    printf("List is: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void reverseprint(struct node*ptr){
    if(ptr==NULL) return;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    printf("reversed list: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}
int main() {
    int n, x;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        insert_at_end(x);
    }
    print(head);
    reverseprint(head);
    return 0;
}

