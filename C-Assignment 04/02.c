/* Sacha Sweets and Bakers is a popular baker. The store has multiple sections for Cakes, 
Cupcakes, Brownies, Savory Items, Chips and Nimco. Currently, the store maintains a manual 
register for recording the details of the bake items such as type, price, orderQty, sales, 
and so on. However, the owner of the store has decided to automate the tasks such as data 
entry, sales calculation, stock updation, and so on to save time and effort required in the 
tasks.You as a software developer have to accomplish the task as follows:
You have to create structure for user in which you store user details. Structure has four
members: name, city, CNICno and phoneNo. First you have to show menu to user with different 
categories including subcategories, for this write function for show menu. Every category have 
different items list in it. Example:      
Cakes:
•	Chocolate Malt Cake   1900
•	Three Milk Cake 1500
•	Pineapple Cake   1000
•	Strawberry Cheese Cake 1700
•	Chocolate Lava Cake 2000
Cup Cakes:
•	MnM cupcake   180
•	Strawberry cupcake 150
•	Cream Cheese cupcake   120
•	Dark Chocolate cupcake 170
•	Milk Chocolate cupcake 150
Write a function to add the item into cart: In this user have to choose maximum 10 item from any category then add quantity of item and add that item to cart.
Note: For cart items you have to maintain array with 10 limit.
Write some of following functions also:
•	Remove Item. 
•	Modify Item. 
•	Display all items in cart. 
•	Cost of cart
•	Print total. 
•	Print user details and items list with price using pointer.    */
#include<stdio.h>
#include<stdlib.h>
struct user
{
    char name[20];
    char city[20];
    int CNICno;
    long long int phoneNo;
}u;
int menu[24][2] = { {101, 1900}, {102, 1500}, {103, 1000}, {104, 1700}, {105, 2000}, // Cake 
                    {201, 180}, {202, 150}, {203, 120}, {204, 170}, {205, 150},      // Cupcakes 
                    {301, 100}, {302, 150}, {303, 120},                              // Brownies 
                    {401, 100}, {402, 150}, {403, 25}, {404, 25}, {405, 40},         // Savory_Items
                    {501, 50}, {502, 50}, {503, 100},                                // Chips
                    {601, 250}, {602, 150}, {603, 400} };                            // Nimco
int cart[24];
int quantity[24];
int price[24];

void showMenu()
{
    printf(" Here is our Menu :");
    printf(" \n CAKES :");
    printf(" \n101 \t Chocolate Malt Cake \t\t Rs.1900");
    printf(" \n102 \t Three Milk Cake \t\t Rs.1500");
    printf(" \n103 \t Pineapple Cake \t\t Rs.1000");
    printf(" \n104 \t Strawberry Cheese Cake \t Rs.1700");
    printf(" \n105 \t Chocolate Lava Cake \t\t Rs.2000");
    printf(" \n\n CUPCAKES :");
    printf(" \n201 \t MnM cupcake \t\t\t Rs.180");
    printf(" \n202 \t Strawberry cupcake \t\t Rs.150");
    printf(" \n203 \t Cream Cheese cupcake  \t\t Rs.120");
    printf(" \n204 \t Dark Chocolate cupcake \t Rs.170");
    printf(" \n205 \t Milk Chocolate cupcake \t Rs.150");
    printf(" \n Brownies");
    printf(" \n301 \t Simple Brownie \t\t Rs.100");
    printf(" \n302 \t Darak Chocolate Brownie \t Rs.150");
    printf(" \n303 \t SugarFree Brownie \t\t Rs.120");
    printf(" \n Savory Items");
    printf(" \n401 \t Potato Snacks \t\t\t Rs.100");
    printf(" \n402 \t Mini Burger \t\t\t Rs.150");
    printf(" \n403 \t Samosa \t\t\t Rs.25 / piece");
    printf(" \n404 \t Rolls \t\t\t\t Rs.25 / piece");
    printf(" \n405 \t Patties \t\t\t Rs.40 / piece");
    printf(" \n Chips");
    printf(" \n501 \t Masala Chips \t\t\t Rs.50");
    printf(" \n502 \t Salty Chips \t\t\t Rs.50");
    printf(" \n503 \t Crinkle Chips \t\t\t Rs.100");
    printf(" \n Nimco : ");
    printf(" \n601 \t Nimco Mix \t\t\t Rs.250");
    printf(" \n602 \t Nimco Sada \t\t\t Rs.150");
    printf(" \n603 \t Masala Nimco \t\t\t Rs.400\n");

}
int globe = 0;
void addItem()
{
    showMenu();
    if (globe == 10) printf("Cart is full!!");
    else {
        int x, q, temp = 0;
        printf("Enter the item code to add in cart: ");
        scanf("%d", &x);
        printf("Enter the quantity of item to add in cart: ");
        scanf("%d", &q);

        for (int i = 0; i < 24; i++) {
            if (menu[i][0] == x) {
                int p = menu[i][1] * q;
                price[globe] = p;
                cart[globe] = x;
                quantity[globe] = q;
                temp = 1;
                break;
            }
        }
        if (temp == 0) {
            printf("Wrong item code. Try Again!!\n");
        }
        else {
            printf("Item added successfully \n");
            globe++;
        }
    }
}
void displaycart()
{
    printf("This is your cart :\n");
    for (int i = 0; i < globe; i++) {
        printf("Item code = %d \t", cart[i]);
        printf("Quantity = %d \t", quantity[i]);
        printf("Price  = %d \n", price[i]);

    }
}
void removeItem()
{
    displaycart();
    if (globe == 0) printf("Cart is Empty!");
    else
    {
        int it, temp = 0, tt = 10;
        printf("Enter the item code to remove: ");
        scanf("%d", &it);
        for (int i = 0; i < tt; i++) {
            if (cart[i] == it) {
                temp = 1;
                tt = 9;
            }
            if (temp == 1) {
                cart[i] = cart[i + 1];
                quantity[i] = quantity[i + 1];
                price[i] = price[i + 1];
            }
        }

        if (temp == 1) {
            globe--;
            printf("Item removed successfully!\n");
        }
        else {
            printf("This item is not found in your cart!!!\n");
        }
    }
}
void modifyItem()
{
    displaycart();
    int it, i = 0, temp = 0;
    printf("Enter the item code to change it's quantity: ");
    scanf("%d", &it);
    for (i = 0; i < globe; i++) {
        if (cart[i] == it) {
            temp = 1;
            break;
        }
    }
    if (temp == 1) {
        int p, q;
        printf("Enter the new quantity: ");
        scanf("%d", &q);
        quantity[i] = q;
        for (int k = 0; k < 10; k++) {
            if (menu[k][0] == it) {
                p = menu[k][1] * q;
            }
        }
        price[i] = p;
        printf("Quantity is changed to %d \n", q);
    }
    else {
        printf("This item is not found in your cart!!!\n");
    }
    return;
}
int CostOfCart()
{
    int i = 0, sum = 0;
    while (i < 10 && price[i] != 0)
    {
        sum += price[i];
        i++;
    }
    return sum;
}

void printTotal()
{
    printf(" Your Grand Total is %d", CostOfCart());
}
int main()
{

    printf("Enter your name:");
    scanf("%s", &u.name);
    printf("Enter your city:");
    scanf("%s", &u.city);
    printf("Enter your CNIC no:");
    scanf("%d", &u.CNICno);
    printf("Enter your phone no:");
    scanf("%d", &u.phoneNo);
    printf("Hello %s", u.name);
    int In = 1;
    do {
        if (In == 1) {
            addItem();
        }
        if (In == 2) {
            removeItem();
        }
        if (In == 3) {
            modifyItem();
        }
        if (In == 4) {
            displaycart();
        }
        if (In == 5) {
            printf("%d \n", CostOfCart());
        }
        printf("\nIf you wish to buy anything more Enter\n 1 to Add Item\n 2 to Delete Items\n 3 to Change Quantity ");
        printf("\n 4 to display all items in cart\n 5 to display the cost of cart\n Any other number to Exit\n");
        scanf("%d", &In);
    } while (In == 1 || In == 2 || In == 3 || In == 4 || In == 5);
    printTotal();
    printf("\nThanks %s for Choosing Us and Visit us again.\n", u.name);
    return 0;
}
