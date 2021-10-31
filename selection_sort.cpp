#include <iostream>
using namespace std;
void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++)
    {
        int iMin = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[iMin])
                iMin = j;
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    return 0;
}
