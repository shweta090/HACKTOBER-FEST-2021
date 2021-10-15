#include <stdio.h>
#include <conio.h>

int main()
{
  int array[1000],temp,a,i,j;
  //enter  number of elements
  printf("Enter number of elements\n");
  scanf("%d", &a);

 for(int i=0;i<a;i++)
 {
    scanf("%d",&array[i]);
 }


 for( int i=1; i<a; i++)
 {
 int temp = array[i];
 int j= i-1;
 while(j>=0 && temp <= array[j])
 {
 array[j+1] = array[j];
 j = j-1;
 }
 array[j+1] = temp;
 }

 printf("Sorted elements: \n");
 for(int i=0; i<a; i++)
 {
 printf("%d ",array[i]);
 }
 }
