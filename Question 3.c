// 3.Next Greater Element 

// #include<stdio.h>

// int stack[100], top = -1;

// // push
// void push(int x){
//     stack[++top] = x;
// }

// // pop
// int pop(){
//     return stack[top--];
// }

// // peek
// int peek(){
//     return stack[top];
// }

// int main(){
//     int a[100], n, i, res[100];

//     printf("Enter size: ");
//     scanf("%d",&n);

//     printf("Enter elements:\n");
//     for(i=0;i<n;i++)
//         scanf("%d",&a[i]);

//     for(i=n-1;i>=0;i--){
//         while(top!=-1 && peek() <= a[i])
//             pop();

//         if(top==-1)
//             res[i] = -1;
//         else
//             res[i] = peek();

//         push(a[i]);
//     }

//     printf("Output:\n");
//     for(i=0;i<n;i++)
//         printf("%d -> %d\n", a[i], res[i]);

//     return 0;
// }