/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* c=new Node(100);
        Node* temp=c;
        while(head1!=NULL && head2!=NULL){
            if(head1->data<=head2->data){
                temp->next=head1;
                head1=head1->next;
                temp=temp->next;
            }
            else{
                temp->next=head2;
                head2=head2->next;
                temp=temp->next;
            }
            if(head1==NULL) temp->next=head2;
            else temp->next=head1;
        }
        return c->next;
    }
};
