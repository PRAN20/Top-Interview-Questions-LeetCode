class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int final_sum=0;
        for(int i=0;i<accounts.size();i++){
        int curr_sum=0;
         for(int j=0;j<accounts[0].size();j++)
         {
            curr_sum += accounts[i][j];
         }
        final_sum = max(curr_sum,final_sum);
    }
  return final_sum;
    }
};
