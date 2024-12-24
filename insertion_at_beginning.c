#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;
struct node* create_node(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
void insert_at_beginning(int data) {
    struct node* ptr = create_node(data);
    if (head == NULL) {
        head = ptr;
        return;
    }
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
}
void print(struct node* ptr) {
    printf("List is: ");
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    int n, x;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        insert_at_beginning(x);
    }
    print(head);
    return 0;
}
