#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


     int left(int i)
    {
        return 2*i;
    }
    int right(int i)
    {
        return 2*i+1;
    }
    int parent(int i)
    {
        return i/2;
    }

    int isMaxHeap(int H[],int heap_size)
    {
        for(int i=heap_size;i>1;i--)
        {
            int p = parent(i);
            if(H[p]<H[i])
            {
                return 0;
            }
        }
        return 1;
    }


int main()
{
    optimize();
    int heap_size = 9;
    int H[] = {0,19,7,17,3,5,18,10,1,2};
   if(isMaxHeap(H,heap_size))
   {
       cout<<"YES it is heap"<<endl;
   }
   else
   {
       cout<<"NO it is not heap"<<endl;
   }

    return 0;
}

