#include <stdio.h>

int main() 
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    switch (i>0) 
	{
        case 1:
            printf("The number is positive.\n");
            break;
        case 0:
            switch (i<0) 
			{
                case 1:
                    printf("The number is negative.\n");
                    break;
                case 0:
                    printf("The number is zero.\n");
                    break;
            }
    }
}
