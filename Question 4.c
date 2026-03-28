// 4.Printer Queue simulation

#include<stdio.h>
#define MAX 100

int q[MAX], front=-1, rear=-1;

// enqueue
void add(){
    int doc;
    if(rear == MAX-1){
        printf("Queue Full\n");
        return;
    }

    scanf("%d",&doc);

    if(front==-1)
        front=0;

    q[++rear] = doc;
}

// dequeue
void print_doc(){
    if(front==-1 || front>rear){
        printf("No documents\n");
        return;
    }

    printf("Printed document: %d\n", q[front++]);
}

// display
void display(){
    int i;

    if(front==-1 || front>rear){
        printf("Queue Empty\n");
        return;
    }

    printf("Pending documents:\n");
    for(i=front;i<=rear;i++)
        printf("%d ", q[i]);
    printf("\n");
}

int main(){
    int ch;

    while(1){
        printf("\n1.Add 2.Print 3.Display 4.Exit\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: add(); break;
            case 2: print_doc(); break;
            case 3: display(); break;
            case 4: return 0;
        }
    }
}