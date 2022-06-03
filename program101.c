 
//Input: Row:4 Col:4

/*
output:

*       *       *       *
*       *       *
*       *
*

*/


#include<stdio.h>


void Display(int iRow,int iCol)
{

    int i=0;
    int j=0;
     if(iRow!=iCol)
    {
        return;
    }
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            
          printf("*\t");

         }
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter a number of rows");
    scanf("%d",&iValue1);

    printf("Enter a number of columns");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

return 0;
}