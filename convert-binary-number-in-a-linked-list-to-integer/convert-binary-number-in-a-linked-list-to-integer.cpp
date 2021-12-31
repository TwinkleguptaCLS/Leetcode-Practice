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
    int getDecimalValue(ListNode* head) {
        if(head->next==NULL && head->val ==0)
        {
            return 0;
        }
        int res = 0;
        int count =0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        count--;
        while(head!=NULL)
        {
            if(head->val!=0)
            {
                res+= pow(2,count);   
            }
            count--;
            head= head->next;
        }
        return res;
        
    }
};