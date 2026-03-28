// 5.Circular Queue Basic Operations

#include<stdio.h>
#define MAX 5

int q[MAX], front=-1, rear=-1;

// enqueue
void enqueue(){
    int val;

    if((rear+1)%MAX == front){
        printf("Queue Full\n");
        return;
    }

    scanf("%d",&val);

    if(front==-1)
        front=0;

    rear = (rear+1)%MAX;
    q[rear] = val;
}

// dequeue
void dequeue(){
    if(front==-1){
        printf("Queue Empty\n");
        return;
    }

    printf("Deleted = %d\n", q[front]);

    if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%MAX;
}

// peek
void peek(){
    if(front==-1){
        printf("Empty\n");
        return;
    }

    printf("Front = %d\n", q[front]);
}

// display
void display(){
    int i;

    if(front==-1){
        printf("Queue Empty\n");
        return;
    }

    i=front;
    while(1){
        printf("%d ", q[i]);
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
    printf("\n");
}

int main(){
    int ch;

    while(1){
        printf("\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
        }
    }
}