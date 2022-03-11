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
        if(head==NULL)
            return NULL;
        ListNode *p =head;
        ListNode *q =head;
        int n=1;
        while(p->next!=NULL)
        {
            p=p->next;
            n++;
        }
        p->next=head;
        int elerot =n-(k%n)-1;
        while(elerot--)
        {
            q=q->next;
        }
        head=q->next;
        q->next =NULL;
        return head;
        
    }
};