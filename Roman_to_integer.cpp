class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char,int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int ans = 0;
    for(int i =1 ; i<= s.length() ; i++)
    {
        if(mp[s[i-1]] < mp[s[i]] )
        {
            ans = ans+mp[s[i]]-mp[s[i-1]];
            i++;
        }
        else{ ans+=mp[s[i-1]];}
    }
    return ans;
    }
        
};
