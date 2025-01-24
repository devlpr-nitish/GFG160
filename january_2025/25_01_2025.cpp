
class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        if(!head || !head->next){
            return head;
        }
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
                
            if(fast == slow){
                break;
            }         
        }
        
        if(!fast || !fast->next){
            return NULL;
        }
        
        slow = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};

