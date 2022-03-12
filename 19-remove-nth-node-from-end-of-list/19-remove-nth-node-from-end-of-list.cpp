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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p =head;
        ListNode* q = head;
        while(n)
        {
            p = p->next;
            n--;
        }
        if(!p)
        {
            head= head->next;
            return head;
        }
        while(p->next)
        {
            q= q->next;
             p=p->next;
        }
        q->next = q->next->next;
        return head;
    }
};