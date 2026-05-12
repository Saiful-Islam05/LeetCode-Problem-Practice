#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'



    int partitionIndx()


    void QuickSort(int a[],int low,int high)
    {
        if(low<high)
        {
            int pivotIndex = partitionIndx(a,low,high);

            QuickSort(a,low,pivotIndex-1);
            QuickSort(a,pivotIndex+1,high);
        }
    }

int main()
{
    optimize();
    int a[] = {10,7,8,9,1,5};
    int n = 6;

    QuickSort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}

