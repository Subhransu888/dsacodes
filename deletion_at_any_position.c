#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int data){
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
void delete(int index){
    struct node*ptr1=head;
    if(index==1){
        head=ptr1->next;
        free(ptr1);
    }
    for(int i=0;i<index-2;i++){
        ptr1=ptr1->next;
    }
    struct node*ptr2=ptr1->next;
    ptr1->next=ptr2->next;
    free(ptr2);
}
void print(struct node*ptr){
    printf("the list is: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    head=NULL;
    int n,x,d;
    printf("enter the number of elments in the list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nenter the number to add at the end of the list: " );
        scanf("%d",&x);
        insert(x);
        print(head);
    }
    printf("\nenter the index you want to delete: ");
    scanf("%d",&d);
    delete(d);
    print(head);
}