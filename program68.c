#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
int iCnt=0;
int iMin=Arr[0];
for(iCnt=0;iCnt<iLength;iCnt++)
{
    if(iMin>Arr[iCnt])
    {
        iMin=Arr[iCnt];
    }
}
return iMin;
}
int main()
{
   int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
printf("Enter a size of an array");
scanf("%d",&iSize);  
ptr=(int*)malloc(iSize*sizeof(int));
printf("Enter the values:\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&ptr[iCnt]);
  }
  iRet=Minimum(ptr,iSize);
  printf("Minimum number is:%d",iRet);
  free(ptr);
    return 0;
}