//Problem Statement: Accept division of student from user and depends on the division displayexam timing. There are four
//                   divisions in school as A,B,C,D. Exam of division A at 7 Am, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//                    (Application should be case sensitive.)
//
//Input: c
//Output: Your exam at 9.20 AM
//
//Input: d
//Output: Your exam at 10.30 AM  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DisplaySchedule()
// Description :      Accept character and display exam time accordingly
// Input :            character
// Output :           Exam Schedule 
// Author :           Sayali Hanumant Thorat
// Date :             16/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7 AM");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8.30 AM");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9.20 AM");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10.30 AM");
    }

} 
int main()
{
    char cValue = '\0';
    //BOOL bRet = FALSE;

    printf("Enter your division:\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}

