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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0;

        ListNode* node1=l1;
        ListNode* node2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* head=dummy;
        int sum=0;


        

        while(node1 != NULL || node2 != NULL){

            if(node1!=NULL){sum=sum+node1->val;}
            if(node2!=NULL){sum += node2->val;}

            sum+=carry;

            carry=sum/10;
            int data=sum%10;
            sum=0;

            ListNode* temp=new ListNode(data);
            dummy->next=temp;
            dummy=dummy->next;

            if(node1!=NULL){node1=node1->next;}
            if(node2!=NULL){node2=node2->next;}
            
        }

        if(carry!=0){ListNode* temp=new ListNode(carry);

        dummy->next=temp;
        dummy=dummy->next;}
                return head->next;

}



    
};