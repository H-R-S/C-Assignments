/* Program the following.
Array of pointers - Create an array which can store pointers to an int data type. 
Create a simple int type array so the pointer array can point to addresses of the 
elements of int array. Fill the pointer array by refereeing the addresses of elements 
of int array and display the elements using loop.  */
#include <stdio.h>
int main( )
{
   /*Pointer variable*/
   int *p;

   /*Array declaration*/
   int array[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

   p = &array[0];

   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("array[%d]: value is %d and address is %p\n", i, *p, p);
      p++;
   }
   return 0;
}
