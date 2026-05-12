#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int isItBst(node *root, int minimum,int maximum)
    {
        if(root==NULL)
        {
            return 1;
        }
        if((root->number>=minimum && root->number<maximum)&& isItBst(root->leftChild,minimum,root->number) && isItBst(root->rightChild,root->number,maximum)
           {
               return 1;
           }

           return 0;
    }
int main()
{
    optimize();


    return 0;
}

