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

    // ListNode *recursive(ListNode *head){

    //     //Base condition
    //     if( head==NULL || head->next==NULL ){
    //         return head;
    //     }

    //     ListNode *newhead=recursive(head->next);
    //     ListNode *front=head->next;//3->2(->x)<-1(newhead)
    //     //i need x<-3<-2<-1(newhead)
    //     //now front is at 2
    //     front->next=head;
    //     head->next=NULL;

    //     return newhead;

    // }
    ListNode* reverseList(ListNode* head) {
        
        //Altering the link

        if(head==NULL){
            return head;
        }

        if(head->next==NULL){
            return head;
        }

        ListNode *q=NULL;
        ListNode *p=head;
        ListNode *r=head->next;

        while(p!=NULL){
            // ListNode *front=temp->next;
            // temp->next=pre;
            // pre=temp;
            // temp=front;

            p->next=q;
            q=p;
            p=r;
            
            if(r!=NULL){
                r=r->next;
            }

        }

        return q;

        //return recursive(head);



    }
};