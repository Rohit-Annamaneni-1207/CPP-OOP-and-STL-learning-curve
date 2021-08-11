#include <iostream>
using namespace std;

int main()
{
    int arr1[10]={65,128,72,34,45,90,83,56,62,63};
    int i,j,temp;
    for (i=1;i<10;i++)
    {
        if (arr1[i-1]>arr1[i])
        {
            temp=arr1[i-1];
            arr1[i-1]=arr1[i];
            arr1[i]=temp;
            j=i-1;
            for (j=i-1;j>0;j--)
            {
                if (arr1[j-1]>arr1[j])
                {
                    temp=arr1[j];
                    arr1[j]=arr1[j-1];
                    arr1[j-1]=temp;
                }
            }
        }
    }
    for (i=0;i<10;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
