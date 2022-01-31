class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int num;
        int i = 0;
        int j = s.size() - 1;
        while( i < j)
        {
            num = s[i];
            s[i] = s[j];
            s[j] = num;
            i = i + 1;
            j = j - 1;
        }
    }
};
