#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    void Merge(int a[],int l,int mid,int r)
    {
        int i=l,j=mid+1,k=0;
        int temp[r-l+1];

        while(i<=mid && j<=r)
        {
            if(a[i]<a[j])
            {
                temp[k++] = a[i++];
            }
            else
            {
                temp[k++] = a[j++];
            }
        }

        while(i<=mid)
        {
            temp[k++] = a[i++];
        }
        while(j<=r)
        {
            temp[k++] = a[j++];
        }

        for(int i=l,k=0;i<=r;i++,k++)
        {
            a[i] = temp[k];
        }
    }



    void mergeSort(int a[], int l, int r)
    {
        if(l==r)
        {
            return;
        }

        int mid = (l+r)/2;

        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);

        Merge(a,l,mid,r);
    }


int main()
{
    optimize();
    int a[] = {8,7,6,5,4,3,2,1};

    mergeSort(a,0,7);

    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

