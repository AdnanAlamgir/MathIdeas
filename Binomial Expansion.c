#include<stdio.h>
#include<math.h>
int main()
{
    int n, k;
    char a = 'a', b = 'b';
    printf("Enter n: ");
    scanf("%d", &n);
    for(int m = n; m >= 0; m--)
    {
        printf("a^%d b^%d", m, n - m);
        if(m > 0)
        {
            printf(" + ");
        }

    }
    return 0;
}
