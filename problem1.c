#include <stdio.h>
int main()
{
    //the question is transverse the given matrix using only one array should not use more than one array....
int i,j,k;
int r1,c1;
int temp;
scanf("%d %d",&r1,&c1);
int a[r1][c1];
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        //this is due to avoid the double swap 
      if(i>j){
         temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
      }
    }
}
//use this to print only square matrix...
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        printf("%d",a[i][j]);
    }
    printf("\n");
}
return 0;
}