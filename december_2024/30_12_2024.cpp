
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        // set to store only unique elements
        unordered_set<int> st;
        
        // if we found any duplicates in a then 
        // it will not accepted in set
        for(int val : a){
            st.insert(val);
        }
        // if we found any duplicates in b then 
        // it will not accepted in set
        for(int val : b){
            st.insert(val);
        }
        
        // returning the size of the set 
        // number of unique elements 
        return st.size();
    }
};
