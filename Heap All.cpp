#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

//how to find of root left and right index and also parent index from from child.
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

//Is Max Heap?
int is_max_heap(int H[],int heap_size)
{
    int p;
    for(int i=heap_size; i>1; i--)
    {
        p = parent(i);

        if(H[p]<H[i])
        {
            return 0;
        }
    }

    return 1;
}
//Is Min Heap?
int is_min_heap(int H[],int heap_size)
{
    int p;
    for(int i=heap_size; i>1; i--)
    {
        p = parent(i);
        if(H[p]>H[i])
        {
            return 0;
        }
    }
    return 1;
}

//Heapify er maddhome maxHeap property maintain kori!
void max_heapify(int heap[],int heap_size,int i)   // ***Min heapify just max heapify er reverse where we find minimum number instead of largest and swap.***
{
    int l,r,largest;

    l = left(i);
    r = right(i);

    if(l<=heap_size && heap[l]>heap[i])
    {
        largest = l;
    }

    else if(r<=heap_size && heap[r]>heap[largest])
    {
        largest = r;
    }

    else
    {
        largest = i;
    }

    if(largest==i)
    {
        return;
    }

    if(i!=largest)
    {
        swap(heap[i],heap[largest]);
    }
    max_heapify(heap,heap_size,largest);
}

//Print kori
void print_heap(int heap[],int heap_size)
{

    for(int i=1;i<=heap_size;i++)
    {
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

//Build max_heap for create max heap
void build_max_heap(int heap[],int heap_size)
{
    for(int i=heap_size/2;i>=1;i--)
    {
        max_heapify(heap,heap_size,i);
    }
}


//Heap sort

void heap_sort(int heap,int heap_size)
{
    for(int i=heap_size;i>1;i--)
    {
        swap(heap[1],heap[i]);
        heap_size-=1;
        max_heapify(heap,heap_size,1);
    }
}



int main()
{
    optimize();
    int heap_size = 9;
    int heap[] = {0,9,10,11,15,14,17,20,25,30};
    int isMaxHeap = is_max_heap(heap,heap_size);
    if(isMaxHeap==1)
    {
        cout<<"This is Max heap!"<<endl;
    }
    else
    {
        cout<<"This is not Max Heap!"<<endl;
    }
    int isMinHeap = is_min_heap(heap,heap_size);
    if(isMinHeap==1)
    {
        cout<<"This is Min heap!"<<endl;
    }
    else
    {
        cout<<"This is not min heap"<<endl;
    }

    max_heapify(heap,heap_size,3);
    print_heap(heap,heap_size);

    return 0;
}

