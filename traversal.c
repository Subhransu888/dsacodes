#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
//link list traversal
    void linkedlisttraversal(struct node*ptr){
        while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
        }
    }
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    //linking nodes
    head->data=21;
    head->next=second;
    second->data=15;
    second->next=third;
    third->data=12;
    third->next=NULL;
    linkedlisttraversal(head);
}