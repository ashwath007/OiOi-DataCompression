# include <stdio.h>
# include <stdlib.h>

# define SIZE_OF_ARR 3
int SIZE = SIZE_OF_ARR;
int TOP = -1;

void initArray();
void destroyArray();
void expandArray();
void shrinkArray();

int * stack;


void push(int ele);
void pop();
int isFull();
int isEmpty();
void print();

int n = 1;

void main(){
    int ele,option;
    while(n){
        printf("Enter the option \n");
        printf("\t 1. Push \n");
        printf("\t 2. Pop \n");
        printf("\t 3. Delete \n");
        scanf("%d",&option);
        switch(option){
            case 1:
                printf("Enter the element to push() : ");
                scanf("%d",&ele);
                push(ele);
            break;
            case 2:
                pop();
            break;
            case 3:
                destroyArray();print();
            break;
        }
        
    }

}



void initArray(){
    stack = malloc(sizeof(u_int32_t) * SIZE_OF_ARR);
}

void expandArray(){
    printf("\t Expanding Array Size\n");
    SIZE = SIZE_OF_ARR  * 2;
    stack = realloc(stack ,sizeof(u_int32_t) * SIZE);
}

void destroyArray(){
    printf("\t Deleting the Array\n");
    free(stack);TOP=-1;
}
void shrinkArray(){
    printf("\t Shrinking Array Size\n");
    SIZE = SIZE_OF_ARR/2;
    int * new_stack = malloc(sizeof(u_int32_t) * SIZE);
    for(int u=0;u<=TOP;u++){
        new_stack[u] = stack[u];
    }
    free(stack); stack = new_stack;
}
void push(int ele){
    if(TOP == -1) initArray();
    if(stack == NULL) printf("Some problem in initArray");
    if(!isFull()){
        TOP++; stack[TOP] = ele;
    }
    else{
        expandArray();TOP++;stack[TOP] = ele;
    }
    print();
}
void pop(){
    if(!isEmpty()){
        TOP--;shrinkArray();print();
    }
    else printf("\t ********** Array is Empty ********* \n");
    
}
int isFull(){
    if(TOP == SIZE_OF_ARR-1) return 1; else return 0;
}

int isEmpty(){
    if(TOP == 0) return 1; else return 0;
}
void print(){
    for(int u = 0; u <= TOP; u++){
        printf("Element -> %d \n",stack[u]);
    }
}
