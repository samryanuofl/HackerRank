#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int SmallerInts[1000];
int LargerInts[1000];

void partition(int ar_size, int *  ar) {
    int NumSmallerInts = 0;
    int NumLargerInts = 0;
    const int PartitionNumber = ar[0];
    int i;

    //Build array of ints in list smaller than given number
    for(i=1;i<ar_size;i++)
    {
        if(ar[i] < PartitionNumber)
        {
            SmallerInts[NumSmallerInts] = ar[i];
            NumSmallerInts++;
        }
    }

    //Build array of ints in list larger than given number
    for(i=1;i<ar_size;i++)
    {
        if(ar[i] < PartitionNumber)
        {
            LargerInts[NumLargerInts] = ar[i];
            NumLargerInts++;
        }
    }

    //Print list of smaller ints
    for(i=0;i<NumSmallerInts;i++)
    {
        printf("%d ", SmallerInts[i]);
    }

    //Print the dividing integer
    printf("%d ", PartitionNumber);

    //Print list of larger ints
    for(i=0;i<NumLargerInts;i++)
    {
        printf("%d ", LargerInts[i]);
    }

}
int main(void) {

    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    partition(_ar_size, _ar);

    return 0;
}
