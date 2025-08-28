#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // here we are getting address of a & b
    // so if we want value then we can use *a & *b
    // this will give us valyue of a & b 
    
    // storing addtion in m   
    int m = *(a) + *(b); 
    
    // if we want absolute diffrence then we can use abs
    // which is defined in stdlib header
    
    //storing substraction in n 
    int n = abs(*a - *b);
    
    // now a will have addition
    *a =  m;
    
    // and b will have substraction
    *b = n;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
