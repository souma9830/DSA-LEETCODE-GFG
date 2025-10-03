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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* c= new ListNode(100);
        ListNode* tempc=c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                tempc->next=a;
                tempc=a;
                a=a->next;
            }
            else{
                tempc->next=b;
                tempc=b;
                b=b->next;
            }
        }
        if(a==NULL) tempc->next=b;
        else tempc->next=a;
        return c->next;
    }
};