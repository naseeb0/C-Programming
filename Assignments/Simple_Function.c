#include<stdio.h>

void multiply(int x,int y ){
    int result = x*y;
    printf("Multiplication = %d",result);
}

void add(int x,int y);

int main(){
    multiply(3, 4);
    multiply(5, 10);
    add(4, 9);
}


void add(int x, int y){
   int  result = x+y;
    printf("SUM=%d",result);
}

