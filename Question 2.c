//2. Balanced Parentheses

#include<stdio.h>

char stack[100];
int top = -1;

// push
void push(char c){
    stack[++top] = c;
}

// pop
char pop(){
    return stack[top--];
}

int main(){
    char exp[100];
    int i;
    char c;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i=0; exp[i]!='\0'; i++){

        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){

            if(top == -1){
                printf("Invalid Expression");
                return 0;
            }

            c = pop();

            if((exp[i]==')' && c!='(') ||
               (exp[i]=='}' && c!='{') ||
               (exp[i]==']' && c!='[')){
                printf("Invalid Expression");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced Expression");
    else
        printf("Invalid Expression");

    return 0;
}
