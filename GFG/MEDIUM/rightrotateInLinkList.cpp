/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(head==NULL || head->next==NULL) return head;
        Node* temp=head;
        Node* tail=NULL;
        int len=0;
        while(temp!=NULL){
            if(temp->next==NULL) tail=temp;
            temp=temp->next;
            len++;
        }
        k=k%len;
        temp=head;
        if(k==0) return head;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        Node* newhead=temp->next;
        temp->next=NULL;
        tail->next=head;
        return newhead;
        
    }
};