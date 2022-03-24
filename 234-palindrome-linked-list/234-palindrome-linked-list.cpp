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
    ListNode* getMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* mid)
    {
        ListNode* curr = mid;
        ListNode* prev = NULL;
        ListNode* tmp;
        while(curr)
        {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = getMid(head);
        ListNode* t = reverse(mid);
        ListNode *h =head;
        while(h&&t)
        {
            if(h->val!=t->val)
            {
                return false;
            }
            h = h->next;
            t = t->next;
        }
        return true;
    }
};