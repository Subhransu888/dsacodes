#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
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
void print(struct node*ptr){
    printf("list is:\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int n,x;
    printf("enter the number of elements in the list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the number to enter at end of list: ");
        scanf("%d",&x);
        insert_at_end(x);
        print(head);
    }
    
    return 0;
}