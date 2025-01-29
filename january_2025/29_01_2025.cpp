
class Solution {
  public:
    double power(double b, int e) {
        // code here
        
        double ans = 1.0;
        int n = e;
        if(e < 0){
            n = -1 * e;
        }
        
        while(n > 0){
            
            // if power is odd 
            if(n % 2 == 1){
                ans = ans * b;
                n -= 1;
            }else{
                // if power is even
                b = b  * b;
                n = n / 2;
            }
        }
        
        if(e < 0){
            ans = 1 / ans;
        }
        
        return ans;
    }
};
