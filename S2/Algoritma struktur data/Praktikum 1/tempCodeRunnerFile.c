#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 10, *temp, sum = 7;
    
    temp = &count; 
    *temp = 32;
    
    *temp = count;
    
    sum = *temp * 4;
    
    printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum);
    
    system("pause");
    return 0;
}
