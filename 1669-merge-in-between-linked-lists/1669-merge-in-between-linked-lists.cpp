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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p =list1;
        ListNode* q= list1;
        while(--a)
        {
            p = p->next; 
            q= q->next;
            b--;
        }
        while(b--)
        {
            q= q->next;
        }
        ListNode* temp =list2;
        p->next = temp;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = q->next;
        return list1;
    }
};