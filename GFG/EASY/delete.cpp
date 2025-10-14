/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL) return 0;
        Node* temp=head;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        if(x==1) return head->next;
        Node* del=head;
        if(len>0){
            for(int i=1;i<x-1;i++){
                del=del->next;
            }
            del->next=del->next->next;
        }
        return head;
    }
};