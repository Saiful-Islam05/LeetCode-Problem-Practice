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

    ListNode* getMiddle(ListNode* head)
    {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }


    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* parent = new ListNode(-1);
        parent->next = head;

        ListNode* middle = getMiddle(parent);

        middle->next = middle->next->next;

        return parent->next;
    }
};