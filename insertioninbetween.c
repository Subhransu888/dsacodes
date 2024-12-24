#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void print(struct node*ptr){
    printf("list is: ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insert_in_between(int data,int n){
    struct node*ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->next=NULL;
    if(n==1){
        ptr1->next=head;
        head=ptr1;
        return;
    }
    struct node*ptr2=head;
    for(int i=1;i<n-1;i++){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){
        printf("invalid position\n");
        free(ptr2);
        return;
    }
    ptr1->next=ptr2->next;
    ptr2->next=ptr1;
}
int main(){
    head=NULL;
    int n,x,index;
    printf("\nenter the number of elements in the list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nenter the number: ");
        scanf("%d",&x);
        printf("enter the index: ");
        scanf("%d",&index);
        insert_in_between(x,index);
        print(head);
    }
    return 0;
}