class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Happy new Year 🤞
        // Your code here
        int n = arr.size();
        if(n == 0)return 0;
        
        unordered_set<int> st(arr.begin(), arr.end());
        
        int max_length  = 0;
        
        for(int i = 0; i < n; i++){
            
            // if arr[i] is start
            if(st.find(arr[i] - 1) == st.end()){
                int curr_length = 1;
                int curr_num = arr[i];
                
                // find the length of sequence
                
                while(st.find(curr_num + 1) != st.end()){
                    curr_num++;
                    curr_length++;
                }
                
                max_length = max(max_length, curr_length);
            }
            
        }
        
        return max_length;
    }
};
