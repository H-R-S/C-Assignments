/* Mr. qasim wants to develop a system as he wants to make his shop online. 
He sells computer and every computer sold includes some mandatory components 
and additional items can be added from the table:

Every computer must include A Case, A Ram and a Hard disk
You need to complete tasks below
•	use arrays to store the item code, description and price
•	allow a customer to choose one case, one RAM and one Main Hard Disk Drive
•	calculate the price of the computer using the cost of the chosen items and the basic 
    set of components
•	store and output the chosen items and the price of the computer   */
#include<stdio.h>
#include<string.h>
void main() {
    // Declare Arrays
    char* category[17] = { "Case","Case","RAM","RAM","RAM","Main Hard Disk Drive","Main Hard Disk Drive","Main Hard Disk Drive","Solid State Drive","Solid State Drive","Second Hard Disk Drive","Second Hard Disk Drive","Second Hard Disk Drive","Optical Drive","Optical Drive","Operating System","Operating System" };
    char* ItemCode[17] = { "A1","A2","B1","B2","B3","C1","C2","C3","D1","D2","E1","E2","E3","F1","F2","G1","G2" };
    char* Description[17] = { "Compact","Tower","8 GB","16 GB","32 GB","1 TB HDD","2 TB HDD","4 TB HDD","240 GB SSD","480 GB SSD","1 TB HDD","2 TB HDD","4 TB HDD","DVD/Blu-Ray Player","DVD/Blu-Ray Re-writer","Standard Version","Professional Version" };
    double price[17] = { 75.00,150.00,79.99,149.99,299.99,49.99,89.99,129.99,59.99,119.99,49.99,89.99,129.99,50.00,100.00,100.00,175.00 };
    // Declare variables
    int code;
    double casePrice, ramPrice, mainHDDPrice, ssdPrice, secondHDD, opticalDrivePrice, osPrice;
    int caseIndex, ramIndex, mhddIndex, ssdIndex, shddIndex, odIndex, osIndex;
    printf("%-20s\t%-10s\t%-20s\t%s\n", "Category", "Item Code", "Description", "Price($)");
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < 17; i++)
        printf("%-20s\t%-10s\t%-20s\t%.2f\n", category[i], ItemCode[i], Description[i], price[i]);
    printf("-----------------------------------------------------------------------\n");
    printf("\n");
    printf("Enter the Case Code(1 For A1/ 2 For A2): ");
    scanf("%d", &code);
    if (code == 1) {
        caseIndex = 0;
    }
    else {
        caseIndex = 1;
    }
    casePrice = price[caseIndex];
    printf("Enter the RAM Code(1 For B1/ 2 For B2/ 3 For B3): ");
    scanf("%d", &code);
    if (code == 1)
        ramIndex = 2;
    else if (code == 2)
        ramIndex = 3;
    else
        ramIndex = 4;
    ramPrice = price[ramIndex];
    printf("Enter the Main Hard Disk Drive Code(1 For C1/ 2 For C2/ 3 For C3): ");
    scanf("%d", &code);
    if (code == 1)
        mhddIndex = 5;
    else if (code == 2)
        mhddIndex = 6;
    else
        mhddIndex = 7;
    mainHDDPrice = price[mhddIndex];
    printf("Enter the Second Hard Disk Drive Code(1 For D1/ 2 For D2): ");
    scanf("%d", &code);
    if (code == 1)
        ssdIndex = 8;
    else if (code == 2)
        ssdIndex = 9;
    ssdPrice = price[ssdIndex];
    printf("Enter the Second Hard Disk Drive Code(1 For E1/ 2 For E2/ 3 For E3): ");
    scanf("%d", &code);
    if (code == 1)
        shddIndex = 10;
    else if (code == 2)
        shddIndex = 11;
    else
        shddIndex = 12;
    secondHDD = price[shddIndex];
    printf("Enter the Optical Drive Code(1 For F1/ 2 For F2): ");
    scanf("%d", &code);
    if (code == 1)
        odIndex = 13;
    else if (code == 2)
        odIndex = 14;
    opticalDrivePrice = price[odIndex];
    printf("Enter the Operating System Code(1 For G1/ 2 For G2): ");
    scanf("%d", &code);
    if (code == 1)
        osIndex = 15;
    else if (code == 2)
        osIndex = 16;
    osPrice = price[osIndex];
    // Function to calculate Total
    double total = (casePrice + ramPrice + mainHDDPrice + ssdPrice + secondHDD + opticalDrivePrice + osPrice);
    printf("\n----------------------------------------------------------------\n");
    printf("Your System Details : ");
    printf("\n----------------------------------------------------------------\n");
    printf("Case             : %-20s \tPrice : %.2f $\n", ItemCode[caseIndex], casePrice);
    printf("RAM              : %-20s \tPrice : %.2f $\n", ItemCode[ramIndex], ramPrice);
    printf("Main -HDD        : %-20s \tPrice : %.2f $\n", ItemCode[mhddIndex], mainHDDPrice);
    printf("SSD              : %-20s \tPrice : %.2f $\n", ItemCode[ssdIndex], ssdPrice);
    printf("Second-HDD       : %-20s \tPrice : %.2f $\n", ItemCode[shddIndex], secondHDD);
    printf("Optical Drive    : %-20s \tPrice : %.2f $\n", ItemCode[odIndex], opticalDrivePrice);
    printf("Operating System : %-20s \tPrice : %.2f $\n", ItemCode[osIndex], osPrice);
    printf("\n----------------------------------------------------------------\n");
    printf("Total Price      : %.2f $", total);
    printf("\n----------------------------------------------------------------\n");
    printf("\n--------------( Thankyou For visiting our Store. )--------------\n");
    return 0;
}
