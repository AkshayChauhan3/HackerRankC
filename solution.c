#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max;
    
    //cheking for a 
    if(a>b){
        if(a>c) {
            if (a>d) {
                max = a;
            }
        }
    }
    
    //cheaking for b
    if(b>a){
        if(b>c) {
            if (b>d) {
                max = b;
            }
        }
    }
    
    //cheaking for c 
    if(c>a){
        if(c>b) {
            if (c>d) {
                max = c;
            }
        }
    }
    
    // cheaking for d
    if(d>a){
        if(d>b) {
            if (d>c) {
                max = d;
            }
        }
    }
    
    //returning the biggest no
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

