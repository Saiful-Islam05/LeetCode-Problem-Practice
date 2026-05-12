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

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest,t;

    l = left(i); //left child index 6
    r = right(i); //right child index 7

    if(l<=heap_size && heap[l]>heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if(r<=heap_size && heap[r]>heap[largest])
    {
        largest = r;
    }

    if(largest==i)
    {
        return;
    }

    swap(heap[i],heap[largest]);

    max_heapify(heap,heap_size,largest);
}

void print_heap(int heap[],int heap_size)
{
    for(int i=1;i<=heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    optimize();
    int heap_size = 9;
    int heap[] = {0,19,7,12,3,5,17,10,1,2};
    print_heap(heap,heap_size);

    max_heapify(heap,heap_size,3);

    print_heap(heap,heap_size);

    return 0;
}


