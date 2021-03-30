#include<stdio.h>

struct Employee {
    int id;
    char name[10];
    int ph;
};

int main(){
    struct Employee Emp1;
    Emp1 = (struct Employee) {1,"Hacker",908989};
        
    printf("The Number is %d", Emp1.ph);
    }



