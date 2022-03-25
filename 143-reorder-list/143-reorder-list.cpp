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
    
    void reorderList(ListNode* head) {
        if(head ==NULL || head->next==NULL || head->next->next==NULL)
        {
            return;
        }
        ListNode* mid = getMid(head);
        ListNode* curr = mid->next;
        mid->next = NULL;
        curr = reverse(curr);
        ListNode* h =head;
        while(curr)
        {
            ListNode* tmp2 = curr->next;
            curr->next = h->next;
            h->next = curr;
            curr = tmp2;
            h = h->next->next;
        }
        
    }
};