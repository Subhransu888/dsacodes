#include<stdio.h>
#define MAX 101
int a[MAX];
int front=-1;
int rear=-1;
void enqueue(int data){
    if(rear==MAX-1){
        printf("queue overflow");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else rear=rear+1;
    a[rear]=data;
    printf("enqueued data: %d",data);
}
int main(){
    enqueue(20);
    enqueue(40);
}