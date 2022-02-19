class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
	    int mmin = INT_MAX;
        for(auto x : nums){
            if(x%2) x*=2;
              mmin=min(mmin,x);
            pq.push(x);
        }
        
        int ans= pq.top() - mmin;
        
        
        while(!(pq.top()&1)){
            int cur=pq.top()/2;
            pq.pop();
            mmin=min(mmin,cur);
            pq.push(cur);
            ans=min(ans,pq.top() - mmin);
        }
        
        return ans;
    }
};
