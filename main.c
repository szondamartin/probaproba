#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, sum=0;
    printf("\nKerek egy egesz szamot: ");
    scanf("%d", &N);

    i=1;
    while(i<=N)
    {
        sum+=i;
        i++;
    }

    printf("\nOsszeg: %d\n", sum);

    
}