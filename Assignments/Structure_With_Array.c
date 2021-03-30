#include<stdio.h>

    
struct Employees {
        int Day;
        int Month;
        int Year;
    };
    
int main(){
    struct Employees Date[5] = {{1,2,3},{4,5,6},{2,0,2020}};
    printf("The Date is %d",Date[2].Year);
    
}
