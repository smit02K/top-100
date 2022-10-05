#include<stdio.h>
int main()
{
int i,j,r;                                       //declaring integer variables i,j for loops , r for number of rows
printf("Enter the number of rows/columns :\n");  //asking user for number of rows/columns
scanf("%d",&r);                                  //taking input and saving in variable r
for(i=0;i<r;i++)                                 //loop for number of rows
   {
      for(j=0;j<r;j++)                           //loop for number of columns
        {
           printf("1");                          //printing 1
        }
      printf("\n");                              //printing newline
   }
}
