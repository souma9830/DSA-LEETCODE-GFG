/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        int isPresent=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                isPresent=1;
                break;
            }
            temp=temp->next;
        }
        if(isPresent) return true;
        else return false;
    }
};
