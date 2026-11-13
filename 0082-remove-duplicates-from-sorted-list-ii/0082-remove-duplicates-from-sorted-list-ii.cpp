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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy= new ListNode(0,head);
        ListNode* pre=dummy;
        ListNode* cur=head;

        while(cur!=NULL){
            if(cur->next != NULL && cur->next->val==cur->val){
                //reach the last duplicate node
                while(cur->next !=NULL && cur->next->val==cur->val){
                    cur=cur->next;
                }

                pre->next=cur->next;
            }

            else{
                pre->next=cur;
                pre=cur;
            }

            cur=cur->next;
        }

        return dummy->next;




    }
};