
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        
        if(!head || !head->next){
            return false;
        }
        
        Node *slow = head;
        Node *fast = head;
        
        while(true){
            
            if(fast->next && fast->next->next){
                slow = slow->next;
                fast = fast->next->next;
                
                if(slow == fast){
                    return true;
                }
            }else{
                break;
            }
        }
        
        return false;
    }
};
