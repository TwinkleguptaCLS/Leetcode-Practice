/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || head->next==NULL)
        {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(slow && fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow)
            {
                return true;
            }
        }
        return false;
    }
};