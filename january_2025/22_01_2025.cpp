
class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        
        if(!num1){
            return num2;
        }
        if(!num2){
            return num1;
        }
        
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        Node* res = new Node(-1);
        Node* curr = res;
        int carry = 0;
        
        while(num1 || num2 || carry > 0){
            
            int sum = ((num1) ? num1->data : 0) + ((num2) ? num2->data : 0) + carry;
            
            carry = sum / 10;
            sum = sum % 10;
            // create a temp node and connect
            curr->next = new Node(sum);
            curr = curr->next;
            
            
            if(num1) num1 = num1->next;
            
            if(num2) num2 = num2->next;
        }
        
        
        Node* result = reverse(res->next);
        
        // remove the front zeros
        while(result && (result->data == 0)){
            result = result->next;
        }
        
        
        return result;
    }
    
    Node *reverse(Node* head){
        
        if(!head){
            return head;
        }
        
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};

