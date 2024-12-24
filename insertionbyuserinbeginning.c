#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next
};
struct node*head;              //global variable so that i can acess head at any function i use
void insert(int x){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->next=head;
    head=ptr;
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
        printf("enter the number: ");
        scanf("%d",&x);
        insert(x);
        print(head);
    }
    return 0;
}