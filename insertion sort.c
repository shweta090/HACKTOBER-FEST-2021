#include<stdio.h>
int main()
{
    int a[100],n;
    printf("\n Enter no. of elements : ");
    scanf("%d",&n);
    printf("\n Enter array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //insertion sort code.
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(temp<a[j])    //ascending order.
            {
                a[j+1]=a[j];    //shift greater value to next index.
                a[j]=temp;
            }
        }
    }
    printf("\n Your array in asc. order is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}
