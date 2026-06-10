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

    ListNode* LastNodeOfFirstHalf(ListNode* head)
    {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* ReverseSecondHalf(ListNode* head)
    {
        ListNode* prev = nullptr;

        while(head!=nullptr)
        {
            ListNode* next = head->next;
            head->next = prev;

            prev = head;
            head = next;
            
        }

        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
       
       ListNode* lastNodeOfFirstHalf = LastNodeOfFirstHalf(head);
       ListNode* reverseSecondHalf = ReverseSecondHalf(lastNodeOfFirstHalf->next);

       while(reverseSecondHalf!=nullptr)
       {
            if(head->val!=reverseSecondHalf->val)
            {
                return false;
            }

            head = head->next;
            reverseSecondHalf = reverseSecondHalf->next;
       }

       return true;
    }
};