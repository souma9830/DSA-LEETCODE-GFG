class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tA=headA;
        ListNode* tB=headB;
        int lenA=0;
        while(tA!=NULL){
            lenA++;
            tA=tA->next;
        }
        int lenB=0;
        while(tB!=NULL){
            lenB++;
            tB=tB->next;
        }
        tA=headA;
        tB=headB;
        if(lenA>lenB){
            int diff=lenA-lenB;
            for(int i=1;i<=diff;i++){
                tA=tA->next;
            }
            while(tA!=tB){
                tA=tA->next;
                tB=tB->next;
            }
            return tA;
        }
        else{
            int diff=lenB-lenA;
            for(int i=1;i<=diff;i++){
                tB=tB->next;
            }
            while(tA!=tB){
                tA=tA->next;
                tB=tB->next;
            }
            return tB;
        }
    }
};