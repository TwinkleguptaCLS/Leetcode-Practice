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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* kthnode = NULL, *kthnodeend= NULL , *p =head;
        int len =0; int i=0;
        while(p)
        {
            len++;
            p = p->next;
        }
        p = head;
        while(p)
        {
            if(i== k-1) kthnode = p;
            if(i == len-k) kthnodeend = p;
            if(kthnode && kthnodeend) break;
            p = p->next;
            i++;
        }
        swap(kthnode->val,kthnodeend->val);
        return head;
    }
};