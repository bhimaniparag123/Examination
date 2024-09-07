#include <stdio.h>

typedef struct 
{
    int room_quantity;
    int established_year;
    char city[50];
} House;

main() 
{
    int N;

    printf("Enter the number of houses: ");
    scanf("%d", &N);

    House houses[N];
    for (int i=0;i<N;i++) 
	{
        printf("\nEnter details for house %d:\n", i + 1);
        printf("Number of rooms: ");
        scanf("%d", &houses[i].room_quantity);
        printf("Established year: ");
        scanf("%d", &houses[i].established_year);
        printf("City: ");
        scanf(" %[^\n]s", houses[i].city);
    }
    printf("\nDetails of all houses:\n");
    for (int i=0;i<N;i++) 
	{
        printf("\nHouse %d:\n", i+1);
        printf("Number of rooms: %d\n", houses[i].room_quantity);
        printf("Established year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }
}
