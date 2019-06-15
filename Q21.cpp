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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if((!l1)&&(!l2))
            return NULL;
        if(!l2)
            return l1;
        if(!l1)
            return l2;
        if(l1->val<l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
    }
};

//     similar complexity and non-recursive method
    
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
//         ListNode l3(0), *p = &l3;
        
//         if(!l1&&!l2)
//             return NULL;
//         if(!l1)
//             return l2;
//         if(!l2)
//             return l1;
        
//         while(l1||l2)
//         {
//         if(!l2)
//         {
//             p->next=new ListNode(l1->val);       
//             l1=l1->next;
//             p=p->next;
//             continue;
//         }
//         if(!l1)
//         {
//             p->next=new ListNode(l2->val);       
//             l2=l2->next;
//             p=p->next;
//             continue;
//         }
            
//         if(l1->val<l2->val)
//         {
//             p->next=new ListNode(l1->val);       
//             l1=l1->next;
//         }
//         else if(l1->val==l2->val)
//         {
//             p->next=new ListNode(l2->val);
//             p=p->next;
//             p->next=new ListNode(l1->val);
//             l1=l1->next;
//             l2=l2->next;
//          }
//         else
//         {
//             p->next=new ListNode(l2->val);
//             l2=l2->next;
//         }
//             p=p->next;
//         }
//         return l3.next;
//     }
// };
