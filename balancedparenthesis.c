#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char s){
    if(top==MAX-1){
        printf("stack overflow\n");
        return;
    }
    top=top+1;
    stack[top]=s;
}
char pop(){
    if(top==-1){
        printf("no elements in the stack, nothing to pop\n");
        return;
    }
    top=top-1;
}
int is_balanced(char* exp){
    for(int i=0; exp[i]!='\0';i++){
        char current=exp[i];
        if(current=='('||current=='['||current=='{'){
            push(current);
        }
        else if(current==')'||current==']'||current=='}'){
        char top_char=pop();
        if ((current == ')' && top_char != '(') ||
            (current == '}' && top_char != '{') ||
            (current == ']' && top_char != '[')) {
            return 0;
            }
        }
    }
    return top==-1;
}

int main() {
    char expr[MAX];
    
    printf("Enter a string with parentheses: ");
    scanf("%s", expr);
    
    if (is_balanced(expr)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }
    
    return 0;
}