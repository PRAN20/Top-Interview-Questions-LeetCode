
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int num = 0;
        for (int i =0; i < operations.size(); i++)
        {
            if(operations[i] == "--X" || operations[i] == "X--")
            {
                num = num -1;
            }
            else if(operations[i] == "++X" || operations[i] == "X++")
            {
                num = num +1;
            }
        }
        return num;
        
    }
};
