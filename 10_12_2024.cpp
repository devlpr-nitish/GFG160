
class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        int n = intervals.size();
        
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a , const vector<int> &b){
            return a[1] < b[1];
        });
        
        int count = 1;
        int lastendTime = intervals[0][1];
        
        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= lastendTime){
                count++;
                lastendTime = intervals[i][1];
            }
        }
        
        return n - count;
    }
};