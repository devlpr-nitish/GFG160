
class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        
        if(!head){
            return head;
        }
        
        Node* temp = head;
        while(temp){
            Node *clone = new Node(temp->data);
            clone->next = temp->next;
            temp->next  = clone;
            temp = clone->next;
        }
        
        temp = head;
        while(temp){
            if(temp->random){
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        
        
        Node* cloneHead = new Node(0);
        Node* cloneTemp = cloneHead;
        temp = head;
        
        while(temp){
            cloneTemp->next = temp->next;
            cloneTemp = cloneTemp->next;
            
            temp->next = cloneTemp->next;
            temp = temp->next;
        }
        
        return cloneHead->next;
    }
};
