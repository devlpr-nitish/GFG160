
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        sort(citations.rbegin(), citations.rend()); //3 0 5 3 0 -> 5 3 3 0 0
        int res = 0;
        for(int i = 0; i < n; i++){
            
            if(citations[i] >= i + 1){
                res =  i + 1;
            }else{
                break;
            }
        }
        return res;
    }
};