#include <stdio.h>
#include <stdlib.h>

int CheckAnagram(char TestString[], int length);

int main()
{
    char TestStrings[100][1000];
    int NumTestCases;
    int i;

    scanf("%d", &NumTestCases);

    for(i=0;i<NumTestCases;i++)
    {
        scanf("%s", TestStrings[i]);
    }

    return 0;
}

int CheckAnagram(char TestString[], int length)
{
    const int ImpossibleCase = -1;
    //If string has odd number of characters, it cannot
    //be divided into two anagrams so print -1
    printf("%d", ImpossibleCase);


}
