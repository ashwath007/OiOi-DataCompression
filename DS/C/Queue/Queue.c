#include <stdio.h>
#include <stdlib.h>

# define SIZE 5

int queue[SIZE];
int n=1;
int FRONT=0,BACK=-1;

void enQueue();
void deQueue();
void peek();
void print();

int isFull();
int isEmpty();

void main(){
    int option, ele;
    while(n){
        printf("Enter the option\n");
        printf("\t1. EnQuque\n");
        printf("\t2. DeQueue\n");
        printf("\t3. Peek\n");
        printf("\t4. Delete\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                printf("Enter the element to en-queue: ");
                scanf("%d",&ele);
                enQueue(ele);
            break;
            case 2:
                deQueue();
            break; 
            case 3:
                peek();
            break;
        }
    }
}


int isFull(){
    if(BACK == SIZE-1) return 1; else return 0;
}

int isEmpty(){
    if(FRONT == BACK) return 1; else return 0;
}

void enQueue(int ele){
    if(!isFull()){
        BACK++;
        queue[BACK] = ele;
        print();
    }
    else printf("\t The Queue is Full\n");
}

void deQueue(){
    if(!isEmpty()){
        FRONT++; print();
}
    else printf("\t The Queue is Empty\n");
}

void print(){
    for(int y=FRONT;y<=BACK;y++){
        printf("Element at %d is %d \n",y,queue[y]);
    }
}


void peek(){

}