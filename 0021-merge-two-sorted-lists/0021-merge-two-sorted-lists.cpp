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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
            ListNode* dummy=new ListNode(-1);

            ListNode* head=dummy;

            ListNode* p=list1;
            ListNode* q=list2;



            while(p!=NULL && q!=NULL){
                if(p->val<=q->val){
                        //p chhota hai then attch p with ans
                        dummy->next=p;
                        dummy=p;
                        p=p->next;
                }

                else{
                    dummy->next=q;
                    dummy=q;
                        q=q->next;
                }
            }

            if(p!=NULL){
                dummy->next=p;
                dummy=p;
                p=p->next;
            }

            if(q!=NULL){
                dummy->next=q;
                dummy=q;
                q=q->next;

            }

            return head->next;
    }
};