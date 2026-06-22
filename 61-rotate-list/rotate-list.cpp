/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==nullptr || head->next==nullptr || k==0)
       {
            return head;
       }

        //Step1 - find length and tail
       int length = 1;
       ListNode* tail = head;
       while(tail->next!=nullptr)
       {
            tail = tail->next;
            length++;
       }

       //Step-2 find effective k
       k = k%length;
       if(k==0)
       {
            return head;
       }

       tail->next = head;

       ListNode* newTail = head;

       for(int i=0;i<length-k-1;i++)
       {
            newTail = newTail->next;
       }

       ListNode* newHead = newTail->next;

       newTail->next=nullptr;

       return newHead;

    }
};