class Solution {
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int>& arr) {
        //Your code here
        int n = arr.size();
        unordered_set<int> st;
        
        for (int a : arr) {
            st.insert(a);
        }

        int i = 1;
        while (true) {
            if (st.find(i) == st.end()) {
                break;
            }
            i++;
        }

        return i;
    }
};