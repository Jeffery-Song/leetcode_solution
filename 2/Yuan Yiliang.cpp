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
        ListNode* res= new ListNode(0);
        int j=0;
        ListNode* r=res;
        ListNode* l=NULL;
        
        while(l1!=NULL && l2!=NULL){
            res->val = l1->val + l2->val + j;
            l1=l1->next; l2=l2->next;
            j=0;
            if(res->val >= 10){
                res->val-=10;
                j++;
            }
            res->next= new ListNode(0);
            l=res;//记录上一个
            res=res->next;
        }
        
        while(l1!=NULL){
            res->val = l1->val + j;
            l1=l1->next;
            j=0;
            if(res->val >= 10){
                res->val-=10;
                j++;
            }
            res->next= new ListNode(0);
            l=res;//记录上一个
            res=res->next;
        }
        while(l2!=NULL){
            res->val = l2->val + j;
            l2=l2->next;
            j=0;
            if(res->val >= 10){
                res->val-=10;
                j++;
            }
            res->next= new ListNode(0);
            l=res;//记录上一个
            res=res->next;
        }
        if(j!=0){
            res->val = j;
            res->next= new ListNode(0);
            l=res;//记录上一个
            res=res->next;
        }
        
        l->next=NULL;
        return r;
    }
};