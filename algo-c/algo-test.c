#include<stdio.h>
int lo = 78;
static char sec = 'u'; 
void readL();
void playL();
int count = 77;
extern void sources();
int main(){
    auto int lo;
    register int RAM;
   
    sources();    
    return 1;
}

void readL(){
    sec = 'p';
}


void playL(){
    printf("%c",sec);
}