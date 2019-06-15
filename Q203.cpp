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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return NULL;
        ListNode* p=head;
        while(p->next!=NULL)
        {
            if((p->next)&&(p->next->val==val))
                p->next=p->next->next;
            else
                p=p->next;
        }
        if(head->val==val)
            head=head->next;
    
        return head;
    }
};


//  Recursive Solution  : 

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
        
//         if(head==NULL)
//             return NULL;
//         if(head->val==val)
//             return removeElements(head->next,val);
//         head->next=removeElements(head->next,val);
//         return head;
//     }
// };
