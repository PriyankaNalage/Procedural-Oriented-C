
 //program to accept any number and check is  divisible by 3 and 5
#include<stdio.h>
 #include<stdbool.h>
bool check(int iNo)
{
    if(((iNo%3)==0) && ((iNo%5)==0))
    {
        return true;
        }
    else
    {
        return false;
    }
    
}
int main()
{
 int iValue=0;
 bool bRet=false;
 printf("Enter number\n");
 scanf("%d",&iValue);
 bRet=check(iValue);
if(bRet==true)
{
    printf("%d is divisible by 3 and 5\n",iValue);
}
else
{
    printf("%d is not divisible by 3 and 5\n",iValue);
}
    return 0;
}
 
 