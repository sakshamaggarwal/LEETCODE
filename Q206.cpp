/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        ListNode* a=NULL;
        ListNode* b=head;
        while(b!=NULL)
        {
            ListNode* temp=b->next;
            b->next=a;
            a=b;
            b=temp;
        }
        return a;
    }
};
