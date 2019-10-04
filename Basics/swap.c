#include <stdio.h>

void swap(int *a,int *b) {
    int temp = *a; 
    *a = *b;
    *b = temp;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;    
    scanf("%d %d", &a, &b);
    printf("Before swapping:\na = %d\nb = %d\n", a, b);
    swap(pa, pb);
    printf("After swapping:\na = %d\nb = %d", a, b);
    return 0;
}
