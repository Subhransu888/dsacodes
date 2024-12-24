#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linkedlisttraversal(struct node*ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insert_at_beginning(struct node*head, int data){
    struct node*ptr=(struct node*) malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return ptr;
}
int main(){
struct node*head;
struct node*second;
struct node*third;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=14;
head->next=second;
second->data=13;
second->next=third;
third->data=17;
third->next=NULL;
linkedlisttraversal(head);
insert_at_beginning(head, 65);
linkedlisttraversal(head);
return 0;
}