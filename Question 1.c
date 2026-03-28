//1.Reverse a string using stack

// #include<stdio.h>
// #include<string.h>

// char stack[100];
// int top = -1;

// // push
// void push(char c){
//     stack[++top] = c;
// }

// // pop
// char pop(){
//     return stack[top--];
// }

// int main(){
//     char str[100];
//     int i;

//     printf("Enter string: ");
//     scanf("%s", str);

//     // push all characters
//     for(i=0; str[i]!='\0'; i++){
//         push(str[i]);
//     }

//     printf("Reversed string: ");

//     // pop and print
//     while(top != -1){
//         printf("%c", pop());
//     }

//     return 0;