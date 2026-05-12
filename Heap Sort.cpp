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



void print_heap(int heap[],int heap_size)
{
    for(int i=0; i<=heap_size; i++)
    {
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

void max_heapify(int heap[],int heap_size, int index)
{
    int l,r,largest,t;
    l = left(index);
    r = right(index);

    if(l<=heap_size && heap[l]>heap[index])
    {
        largest = l;
    }
    else
    {
        largest = index;
    }

    if(r<=heap_size && heap[r]>heap[largest])
    {
        largest = r;
    }

    if(largest==index)
    {
        return;
    }

    swap(heap[index],heap[largest]);

    max_heapify(heap,heap_size, largest);

}


void heap_sort(int heap[], int heap_size)
{

    int i,t;
    for(int i=heap_size; i>1; i--)
    {
        swap(heap[1],heap[i]);
        heap_size-=1;
        max_heapify(heap,heap_size,1);
    }

    print_heap(heap,heap_size);
}



void build_max_heap(int heap[],int heap_size)
{
    for(int i=heap_size/2; i>=1; i--)
    {
        max_heapify(heap,heap_size,i);
    }

    heap_sort(heap,heap_size);
}


int main()
{
    optimize();
    int heap_size = 9;
    int heap[] = {0,12,7,1,3,10,17,19,2,5};

    build_max_heap(heap,heap_size);


    return 0;
}

