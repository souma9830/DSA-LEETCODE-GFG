/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        Node* temp=head;
        vector<int> arr;
        int len=0;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
            
        }
        return arr;
    }
};