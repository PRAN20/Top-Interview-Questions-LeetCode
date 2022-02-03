class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> sum1;
        for(int x : nums1){
            for(int y : nums2){
                sum1[x+y]++;
            }
        }
        int cnt = 0;
        for(int x : nums3){
            for(int y : nums4){
                if(sum1.count((-(x+y)))==1){
                    cnt+= sum1[(-(x+y))];
                }
            }
        }
        return cnt;
    }
};
