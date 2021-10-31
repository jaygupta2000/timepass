#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int k=0;k<n-1;k++)
    {
        int flag = 0;
        for(int i=0;i<n-k-1;i++)
        {
            if ( a[i] > a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}
// Time complexity : O(n^2)
