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
        int cnt=0;
        while(p)
        {
            cnt++;
            p=p->next;
        }
        p=head;
        if(cnt==1)
        {
            head =NULL;
            return head;
        }
        int k = cnt-n;
        if(k==0)
        {
            head= head->next;
            return head;
        }
       
        while(k)
        {
            q=p;
            p = p->next;
            k--;
        }
        q->next = p->next;
        delete(p);
        return head;
    }
};