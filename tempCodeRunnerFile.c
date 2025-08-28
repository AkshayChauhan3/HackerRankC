#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// we are given two values n & k
// n is 1 to n set of number in sequence
// k is value
// i and (i+) we have to do untill i=n-1
// and we have to find maximum velue of 1 and (i+) which is less than k

void calculate_the_maximum(int n, int k)
{
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int a = i & j;
            int b = i | j;
            int c = i ^ j;

            if ((a > maxAnd) && (k > a))
            {
                maxAnd = a;
            }

            if ((b > maxOr) && (k > b))
            {
                maxOr = b;
            }

            if ((c > maxXor) && (k > c))
            {
                maxXor = c;
            }
        }
    }

      printf("%d\n",maxAnd);
      printf("%d\n",maxOr);
      printf("%d\n",maxXor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
