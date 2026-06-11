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

    int findFullLength(ListNode* head)
    {
        int cnt = 0;

        while(head!=nullptr)
        {
            head = head->next;
            cnt++;
        }

        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length = findFullLength(head);
        length-=n;

        ListNode* parent = new ListNode(-1);
        parent->next = head;
        ListNode* prev = parent;

        for(int i=0;i<length;i++)
        {
            prev = prev->next;
        }

        prev->next = prev->next->next;

        return parent->next;


    }
};