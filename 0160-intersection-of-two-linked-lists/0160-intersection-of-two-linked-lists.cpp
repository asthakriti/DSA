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
int getLength(ListNode* head) {
    int len = 0;
    while (head) {
        len++;
        head = head->next;
    }
    return len;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     ListNode* t1=headA;
    //     ListNode* t2=headB;

    //     if(headA==NULL || headB==NULL){
    //         return NULL;
    //     }
    // //The condition we used in the while beacuse
    // //What if from the starting oneward they are pointing on the same node
    // //in that case we have to return either t1 or t2
    //     while(t1!=t2){
    //         t1=t1->next;
    //         t2=t2->next;

    //         if(t1==t2){
    //             return t1;
    //         }

    //         if(t1==NULL){
    //             t1=headB;
    //         }
    //         if(t2==NULL){
    //             t2=headA;
    //         }
    //     }
    //     return t1;

    // ListNode* t1=headA;
    // ListNode* t2=headB;

    // while(t1!=t2){

    //     t1=t1->next;
    //     t2=t2->next;

    //     if(t1==t2){
    //         return t1;
    //     }

    //     if(t1==NULL){
    //         t1=headB;
    //     }

    //     if(t2==NULL){
    //         t2=headA;
    //     }

    // }

    // return t1;

    //     unordered_set<ListNode*> m; // store addresses of nodes



    // //store all element of list1 
    // ListNode* t=headA;

    // while(t!=NULL){
    //     m.insert(t);
    //     t=t->next;


    // }

    // //check whther the addres is present into 1 list or not
    // ListNode* p=headB;

    // while(p!=NULL){
    //     if(m.find(p)!=m.end()){
    //         //found
    //         return p;
    //     }
    //     p=p->next;
    // }

    // return NULL;
    int lenA = getLength(headA);
    int lenB = getLength(headB);

    // Step 1: Find the difference
    int diff = abs(lenA - lenB);

    // Step 2: Move longer list ahead by diff
    if (lenA > lenB) {
        while (diff--) headA = headA->next;
    } else {
        while (diff--) headB = headB->next;
    }

    // Step 3: Move both simultaneously
    while (headA && headB) {
        if (headA == headB) return headA;
        headA = headA->next;
        headB = headB->next;
    }

    return NULL; // No intersection

    }
};