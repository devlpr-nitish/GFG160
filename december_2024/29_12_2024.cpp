
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        set<int> st;
        
        // storing array b in st to remove all duplicates
        for(int i = 0; i < b.size(); i++){
            st.insert(b[i]);
        }
        
        set<int> sta;
        
        // storing array a in sta to remove all duplicates
        for(int i = 0; i < a.size(); i++){
            sta.insert(a[i]);
        }
        
        // res array
        vector<int> res;
        
        for(int val : sta){
            // if val is present in st then push it into result array
            if(st.find(val) != st.end()){
                res.push_back(val);
            }
        }
        
        return res;
        
    }
};
