/* Program the following.
·	Consider the data set given below. Map the data in array.
	33,4,55,42,66,22,77,21,33,34,66,88,73,2,71,23
·	Find the mean, median and mode using following formula.  */
#include <stdio.h>
int main()
{
    int invalue[] = { 33,4,55,42,66,22,77,21,33,34,66,88,73,2,71,23 };
    int num_value = 16;
    float tot = 0;
    float mean = 0;

    printf("Data in array : [ 33,4,55,42,66,22,77,21,33,34,66,88,73,2,71,23 ]");

    for (int i = 0; i < num_value; i++)
    {
        tot = tot + invalue[i];
    }
    mean = tot / num_value;
    printf("\nThe mean value is: %.1f", mean);
    //Median calculation   
    float median = 0;
    float mid = 0;
    if (num_value % 2 == 0)
    {
        int temp = (num_value / 2) - 1;
        for (int i = 0; i < num_value; i++)
        {
            if (temp == i || (temp + 1) == i)
            {
                mid = mid + invalue[i];
            }
        }
        mid = mid / 2;
        printf("\nMedian value is: %.1f", mid);
    }
    else
    {
        int temp = (num_value / 2);
        for (int i = 0; i < num_value; i++)
        {
            if (temp == i)
            {
                int mid = invalue[i];
                printf("\nMedian value: %d", mid);
            }
        }
    }
    //Mode calculation
    int i, j, z, tmp, maxCount, modeValue;
    int tally[16];
    for (i = 0; i < num_value; i++)
    {
        for (j = 0; j < num_value - i; j++)
        {
            if (invalue[j] > invalue[j + 1])
            {
                tmp = invalue[j];
                invalue[j] = invalue[j + 1];
                invalue[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < num_value; i++)
    {
        for (z = i + 1; z < num_value; z++)
        {
            if (invalue[i] == invalue[z])
            {
                tally[i]++;
            }
        }
    }
    maxCount = 0;
    modeValue = 0;
    for (i = 1; i <= num_value; i++)
    {
        if (tally[i] > maxCount)
        {
            maxCount = tally[i];
            modeValue = invalue[i];
        }
    }
    printf("\nMode value is : %d", modeValue);
    return 0;
}



