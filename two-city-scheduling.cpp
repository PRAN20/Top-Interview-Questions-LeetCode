	int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size(),ans=0;
        vector<int> saves;
        for(int i=0;i<n;++i){
            ans+=costs[i][0];
            saves.push_back(costs[i][1]-costs[i][0]);
        }
        
        sort(saves.begin(),saves.end());
        for(int i=0;i<n/2;++i)  ans+=saves[i];
        return ans;
    }
