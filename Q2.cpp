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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode l3(0), *p=&l3;
        int sum=0,carry=0;
        while((l2)||(l1))
        {
            sum=(l2 ? l2->val :0) +(l1 ? l1->val : 0) +carry; 
            carry=sum/10;
            sum=sum%10;
            p->next=new ListNode(sum);
            l2=(l2 ? l2->next : l2);
            l1=(l1 ? l1->next : l1);
            p=p->next;
        }
        if(carry>0)
        {
            p->next=new ListNode(carry);
        }
        return l3.next;
    }
};

//     Recursive Solution and no need for a pointer to Linked List
    
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         if((!l1)&&(!l2))
//             return NULL;
//         if(!l1)
//             return l2;
//         if(!l2)
//             return l1;
//         int sum=l1->val+l2->val;
//         ListNode* p=new ListNode(sum%10);
//         p->next=addTwoNumbers(l1->next,l2->next);
//         if(sum>9)
//             p->next=addTwoNumbers(p->next,new ListNode(1));
//         return p;
//     }
// };
