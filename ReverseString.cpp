class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size(), index = 0;
        char save;
        for(; index < len / 2; ++index) {
            save = s[index];
            s[index] = s[len - index - 1];
            s[len - index - 1] = save;
        }
    } 
};
