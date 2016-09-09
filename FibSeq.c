#include <stdio.h>

void main()
{
    int n;

    do
    {
        int result, y=2, x, F1 = 1, F2 = 1;

        printf("Insert the Nth number of the Flibonacci sequence:  \n\n");
        scanf("%d", &n);

        if (n==0)
            {
                printf("\n\nThe number is 0\n\n");
            }
        else if (n==1)
            {
                printf("\n\nThe number is 1\n\n");
            }
        else if (n==2)
            {
                printf("\n\nThe number is 1\n\n");
            }
        else if (n>2)
            {
                 while(y<n)
                    {
                        x=F1+F2;
                        F1=F2;
                        F2=x;
                        y++;
                    }
                        printf("\n\nThe %d number of the flibonacci sequence is: %lu\n\n", n, x);
            }
    }
    while (n>-1);
    printf("invalid input");
}
