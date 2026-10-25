
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;

        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "C") {
                ans.pop_back();
            }
            else if(operations[i] == "D") {
                int doub = ans.back() * 2;
                ans.push_back(doub);
            }
            else if(operations[i] == "+") {
                int sum = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(sum);
            }
            else {
                ans.push_back(stoi(operations[i]));
            }
        }

        int total = 0;
        for(int i = 0; i < ans.size(); i++) {
            total += ans[i];
        }

        return total;
    }
};
