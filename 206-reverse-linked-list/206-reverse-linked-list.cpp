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
    ListNode* reverseList(ListNode* head) {
        stack<int>s;
        ListNode* p =head;
        while(p)
        {
            s.push(p->val);
            p = p->next;
        }
        p=head;
        while(p)
        {
            p->val = s.top();
            s.pop();
            p = p->next;
        }
        return head;
    }
};