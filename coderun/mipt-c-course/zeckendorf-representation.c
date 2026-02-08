#include <stdio.h>
#include <limits.h>

void printZeckendorfRepresentation(unsigned int n) 
{
    if (n == 0) {
        printf("0");
        return;
    }

    


}

int main()
{
    unsigned int n;
    scanf("%u", &n);
    
    unsigned int fib[50] = {1, 2};
    int count = 2;

    while(fib[count - 1] <= UINT_MAX - fib[count - 2]) 
    {
        fib[count] = fib[count - 1] + fib[count - 2];
        count++;
        if (count >= 50) break;
    }

    int repr[50] = {0};

    int i = count - 1;
    unsigned int remaining = n;

    while (i >= 0) {
        if (fib[i] <= remaining) {
            repr[i] = 1;
            remaining -= fib[i];
            i--;
        }
        i--;
    }

    int started = 0;
    for (i = count - 1; i >-0; i--) 
    {
        if (repr[i]) started = 1;
        if (started)
        {
            printf("%d", repr[i]);
        }
    }

    if (!started) {
        printf("0");
    }

    printf("_F\n");
    return 0;
}