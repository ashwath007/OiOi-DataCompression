#include <stdio.h>
#include <stdlib.h>

# define SIZE_OF_Q 5
int SIZE = SIZE_OF_Q;
int FRONT=0,BACK=-1;


int n = 1;
int * queue;

void initQueue();
void sretchQueue();
void deleteQueue();

void enQueue();
void deQueue();
void peek();
void print();

int isFull();
int isEmpty();


void main(){
    int option,ele;
    while(n){
        printf("Enter the option\n");
        printf("\t1. EnQuque\n");
        printf("\t2. DeQueue\n");
        printf("\t3. Peek\n");
        printf("\t4. Delete\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                enQueue();
                print();
            break;
            case 2:
                deQueue();
                print();
            break;
            case 3:
                peek();            
            break;
            case 4:
                deleteQueue();
            break;

        }
    }
}



void initQueue(){
    queue = malloc(sizeof(u_int32_t) * SIZE_OF_Q);
}


void deleteQueue(){
    free(queue);
}

void sretchQueue(){
    printf("\t Expanding Queue Size\n");
    int temp_size = SIZE * 2;
    queue = realloc(queue, sizeof(u_int32_t) * temp_size);
}

void shrinkQueue(){
    if(isEmpty()){
        printf("Queue is empty");
    }
    printf("\t Shrinking Queue Size\n");
    int temp_size = BACK;
    int * new_queue = malloc(sizeof(u_int32_t) * temp_size);
    for(int y=FRONT;y<=BACK;y++){
        new_queue[y] = queue[y];
    }
    free(queue);
    queue = new_queue;
}


void peek(){

}

int isFull(){
    if(BACK == SIZE-1) return 1; else return 0;
}

int isEmpty(){
    if(FRONT == BACK) return 1; else return 0;
}


void enQueue(){
    int ele;
    printf("Enter the element  : ");
    scanf("%d",&ele);
    if(isFull()){
        sretchQueue();
        BACK++;
        queue[BACK] = ele;
    }
    else{
        if(FRONT == BACK+1){
            initQueue();
        }
        BACK++;
        queue[BACK] = ele;
    }

}

void deQueue(){
        FRONT++;
        shrinkQueue();
}



void print(){
    for(int y=FRONT;y<=BACK;y++){
        printf("Element at %d is %d \n",y,queue[y]);
    }
}