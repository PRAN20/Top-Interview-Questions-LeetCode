class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
        // no of rows;
        int n = mat.size();
        
       
        set<pair<int,int> > s;
        
        
        for(int i = 0; i<n; ++i)
        {
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            s.insert({cnt,i});
        }
        
        vector<int> ans;
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        
        return ans;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        return Weakest(mat,k);
        
    }
};
