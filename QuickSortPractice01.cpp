#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int Partition(int arr[],int low,int high)
    {

        int len = (high-low)+1;

       int pivotIndex = (rand()%len)+low;

        swap(arr[pivotIndex],arr[high]);

        int pivot = arr[high];

        int i = low-1;

        for(int j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                 i++;
                swap(arr[i],arr[j]);
            }

        }

        swap(arr[i+1],arr[high]);

        return i+1;
    }

    QuickSort(int arr[],int low,int high)
    {
        if(low<high)
        {
            int pivot = Partition(arr,low,high);

            QuickSort(arr,low,pivot-1);
            QuickSort(arr,pivot+1,high);
        }

    }
int main()
{
    optimize();
    int arr[5] = {5,4,3,2,1};

    int n = 5;

    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
