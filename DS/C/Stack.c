#include <stdio.h>
#include <stdlib.h>

# define S 5
int n=1;

int TOP = -1;
int array[S];
void push();
void peek();
void pop();
void delete();

int isFull();
int isEmpty();

void print();

void main(){
    int option;
    while(n){
        printf("Enter the option\n");
        printf("\t1. Push\n");
        printf("\t2. Pop\n");
        printf("\t3. Peek\n");
        printf("\t4. Delete\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                push();
            break;
            case 2:
                pop();
            break;
            case 3:
                peek();            
            break;
            case 4:
                delete();
            break;

        }
    }
}


void push(){
    int ele;
    printf("enter the element \n");
    scanf("%d",&ele);
    int status =  isFull();
    if(status) // Full - 1
    {
        printf("Stack is full \n");
    }
    else{
        TOP++;
        array[TOP] = ele;
    }
    print();
}

void peek(){
    int ele;
    printf("Enter the position to search in  %d : ",TOP);
    scanf("%d",&ele);
    if(ele > TOP) {
        printf("Out of bound ");
    }
    for(int y=0;y<=TOP;y++){
        if(ele == y) {
            printf("The element %d ",array[ele]);
            break;
        }
    }
}

void pop(){
    array[TOP] = 0;
    if(isEmpty()) printf("Array is empty");
    else{
        TOP--;
        print();
    }
    
}

int isFull(){
    if(TOP == S-1) return 1;
    else return 0;
    
}

int isEmpty(){
    if(TOP == 0) return 1;
    else return 0;
}


void print(){
    for(int i=0;i<=TOP;i++){
        printf("Element at %d is %d \n",i,array[i]);
    }
}