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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        ListNode* q =NULL;
        while(p)
        {
            ListNode* dup = p->next;
            int flag=0;
            while(dup && dup->val==p->val)
            {
                dup = dup->next;
                flag=1;
            }
            if(flag)
            {
                if(q)
                {
                    q->next = dup;   
                }
                else
                {
                    head = dup;
                }
            }
            else
            {
                q = p;
            }
            p=dup;
        }
        return head;
    }
};