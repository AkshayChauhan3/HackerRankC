#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    // input: 12345

    int a = n/10000; // 1 
    int b = n%10000; // 2345
    int c = b/1000; // 2
    int d = n%1000; // 345
    int e = d/100; // 3
    int f = n%100; // 45
    int g = f/10; // 4
    int h = n%10; // 5 
    
    int sum = a+c+e+g+h;  

    printf("%d\n",sum);
    
    return 0;
}