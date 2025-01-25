// Happy Republic day 🇮🇳


class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        
        if(!head || !head->next)
            return;
        
        Node* slow = head;
        Node* fast = head;
        
        Node* prev = NULL;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow){
                Node* temp = head;
                while(slow != temp){
                    prev = slow;
                    slow = slow->next;
                    temp = temp->next;
                }
                
                prev->next = NULL;
                
                return;
            }
        }
        
        // no loop exists
        if(!fast || !fast->next){
            return;
        }
        
    }
};

