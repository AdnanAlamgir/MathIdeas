#include<stdio.h>

main()
{
    int decimal, mod, i;
    int binary[20];

    while(1 == 1)
    {
        i = 0;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while(decimal != 0)
        {
           mod = decimal % 2;
           binary[i] = mod;
           decimal = decimal / 2;

           i++;
        }

        printf("The binary form is: ");
        for(i = i - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
        printf("\n");

    }
    return 0;
}
