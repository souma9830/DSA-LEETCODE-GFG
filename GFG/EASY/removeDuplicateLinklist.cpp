/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL || head->next==NULL) return head;
        Node* a=head;
        Node* b=head->next;
        while(b!=NULL){
            while(b!=NULL && b->data==a->data){
                b=b->next;
            }
            a->next=b;
            a=b;
            if(b!=NULL) b=b->next;
        }
        return head;
    }
};