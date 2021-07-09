#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:-> ");
    scanf("%d", &n);
    int a[100];
    int b=0;
    int sum=0;
    do
    {
        a[b] = n%2;
        n = n/2;
        sum = (n%2) + sum;
        b++;
    }
    while(n > 0);
    printf("Binary=> ");
    for(b = b - 1; b>=0;b--)
    {
        printf("%d",a[b]);
    }
    printf("\nSum of binary = %d", sum);
}
