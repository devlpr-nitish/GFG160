
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int n1 = s1.length();
        int n2 = s2.length();
    
        int i = n1 - 1, j = n2 - 1;
        string res = "";
        int carry = 0;
    
        while (i >= 0 || j >= 0 || carry > 0) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0;
            int bit2 = (j >= 0) ? s2[j] - '0' : 0;
    
            int sum = bit1 + bit2 + carry;
    
            res += (sum % 2) + '0';
    
            carry = sum / 2;
    
            i--;
            j--;
        }
    
        reverse(res.begin(), res.end());
        // remove zeros from start 001011 -> 1011
        int k = 0;
        while(k < res.length()){
            if(res[k] == '0'){
                k++;
            }else{
                break;
            }
        }
        
        return res.substr(k);
    }
};