
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int n = 0;
        bool neg = false;
        
        for(int i = 0; s[i] != '\0'; i++) {
            if(isdigit(s[i])) {
                break; 
            }
            if(s[i] == '-') {
                neg = true;
                break;
            }
        }
        
        
        string num = "";
        for(int i = 0; s[i] != '\0'; i++) {
            char ch = s[i];
            if(ch == ' ' || ch == '-') continue;
            if(isdigit(ch)) {
                num += ch;
            } else {
                break;
            }
        }
        
        
        if(num.length() > 10) {
            if(neg) {
                return INT_MIN;  // -2147483648
            } else {
                return INT_MAX;  // 2147483647
            }
        }
        
        
        int res = 0;
        int j = 0;
        int len = num.length();
        while(j < len) {
            res = (res * 10) + (num[j++] - '0');
        }
    
        if(neg) {
            res = res * -1;
        }
        
        return res;
    }
};