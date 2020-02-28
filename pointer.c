/*

You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets a with the sum of them, and 
b with the absolute difference of them.

<b>Input:</b>
4
5
<b>Output:</b>
9
1
*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function  
    int sum = *a + *b;
    int abss = abs(*a - *b);
    *a = sum;
    *b = abss;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
