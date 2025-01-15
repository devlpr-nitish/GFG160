
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        
        unordered_map<int,int> mp;
        int prefSum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < n; i++){
            
            prefSum += (arr[i] == 0)? -1 : 1;
            
            
            if(prefSum == 0){
                maxLen = max(maxLen, i + 1);
            }
            
            if(mp.find(prefSum) != mp.end()){
                maxLen = max(maxLen, i - mp[prefSum]);
            }else{
                mp[prefSum] = i;
            }
        }
        
    
        return maxLen;
    }
};
