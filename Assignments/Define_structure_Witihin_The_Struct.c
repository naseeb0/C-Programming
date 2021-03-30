#include <stdio.h>

struct Employees {
    int id;
    char name[10];
    int ph;

}Emp1;

int main(){
    struct Employees Emp1 = {123,"Hacker",90900};
    printf("Name of the Employee is %s",Emp1.name);
}


