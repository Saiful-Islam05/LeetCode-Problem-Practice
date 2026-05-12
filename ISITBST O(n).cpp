#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

    int isBST(node *root, int minimum,int maximum)
    {
        if(root==NULL)
        {
            return 1;
        }

        if((root->number>=minimum && root->number<maximum) && isBST(root->leftChild,minimum,root->number) && isBST(root->rightChild,root->numb))
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

