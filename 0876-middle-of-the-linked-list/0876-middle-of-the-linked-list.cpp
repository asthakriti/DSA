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
    ListNode* middleNode(ListNode* head) {



        ListNode *p=head;
        if(head->next==NULL){
            return head;
        }
        ListNode *q=head->next->next;

        while(q!=NULL){
            p=p->next;

            if(q->next!=NULL){
                q=q->next->next;
            }
            else{
                break;
            }

          
            
        
            
            
            
        }
        if(q!=NULL){
            return p;
        }
        else{return p->next;}
        
    }
};