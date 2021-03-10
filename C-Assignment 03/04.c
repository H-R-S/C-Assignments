/* A food-based company wants their users to rate their newly launched food items, items are 
Burger, Broast, Rice, Roll, Handi, Platter, Kebabs, Sandwich, Shake, Kheer.
Scoring can be done from 1 to 10, best towards worst respectively. Design a solution that saves 
the food items and then let users rate these food items along with their comments. A bar graph
based on rating should also be printed
Note: (Structures must be used to save the data)

A sample run of the application is shown as follows:
Enter score for Burger (1-10): 8
Enter reason for liking or disliking: Fresh and juicy

Output of your program should be as follows 

Item			Rating		Reason			    Histogram
Burger	        8	        Fresh and juicy	    ********
Broast	        4	        Taste was not good	****
.	            .	        .	                .
.	            .	        .              	    .             */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct item
{
    // variables to store data
    char item_name[50];
    int rating;
    char reason[100];
    char histogram[20];
};
int main()
{
    // creating struct array
    struct item* it = (struct item*)malloc(10 * sizeof(struct item));

    // storing the names of items
    strcpy(it[0].item_name, "Burger");
    strcpy(it[1].item_name, "Broast");
    strcpy(it[2].item_name, "Rice");
    strcpy(it[3].item_name, "Roll");
    strcpy(it[4].item_name, "Handi");
    strcpy(it[5].item_name, "Platter");
    strcpy(it[6].item_name, "Kebabs");
    strcpy(it[7].item_name, "Sandwich");
    strcpy(it[8].item_name, "Shake");
    strcpy(it[9].item_name, "Kheer");

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter score for %s (1-10) : ", it[i].item_name);
        scanf("%d", &it[i].rating);
        printf("Enter reason for liking or disliking : ");
        char ch;
        scanf("%c", &ch);
        gets(it[i].reason);
        for (int j = 0; j < it[i].rating; j++)
        {
            it[i].histogram[j] = '*';
        }
        it[i].histogram[it[i].rating] = '\0';
    }
    //printing in required format
    printf("\n--------------------------------------------------------------------------------\n");
    printf("Item              Rating                Reason                        Histogram");
    printf("\n--------------------------------------------------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%-20s", it[i].item_name);
        printf("%-20d", it[i].rating);
        printf("%-30s", it[i].reason);
        printf("%s\n", it[i].histogram);
    }
    printf("\n--------------------------------------------------------------------------------\n");
    return 0;
}
