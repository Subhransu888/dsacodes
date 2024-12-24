#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void print(struct node*ptr){
    printf("the list is: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insert_at_end(int data){
    struct node*ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->next=NULL;
    if(head==NULL){
        head=ptr1;
        return;
    }
    struct node*ptr2;
    for(ptr2=head;ptr2->next!=NULL;ptr2=ptr2->next){
    }
    ptr2->next=ptr1;
}
void delete_at_beginning(){
    struct node*ptr=head;
        head=ptr->next;
        free(ptr);
}
int main(){
    head=NULL;
    int n,x;
    printf("enter the number of elments you want in list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nenter the element: ");
        scanf("%d",&x);
        insert_at_end(x);
        print(head);
    }
    delete_at_beginning();
    printf("\nafter deletion of 1st element ");
    print(head);
}
