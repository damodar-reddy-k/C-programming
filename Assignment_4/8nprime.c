// To print n-primes
#include <stdio.h>

int main() {
    int a, d = 0, b = 2, i, c;
    do {
        printf("\nEnter a positive integer: ");
        scanf("%d", &a);
    } while (a <= 0);

    while (d < a) 
    {
        c = 0;
        i = 2;
        while (i <= b/2) 
        {
            if (b % i == 0) 
            {
                c = 1;
                break;
            }
            i++;
        }
        if (c == 0 && b != 1) 
        {
            printf("%d ", b);
            d++;
        }
        b++;
    }
    printf("\n");
    return 0;
}

