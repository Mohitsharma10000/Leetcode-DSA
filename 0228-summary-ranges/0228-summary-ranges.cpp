class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> arr;
        string st = "";
        int index1 = 0, index2 = -1;

        for (int i = 1; i <= nums.size(); i++) {
            if (i < nums.size() && (long long)nums[i - 1] + 1 == nums[i]) {
                continue;
            } else {
                index2 = i - 1;

                st = to_string(nums[index1]);

                if (index1 != index2) {
                    st += "->";
                    st += to_string(nums[index2]);
                }

                arr.push_back(st);
                st = "";
                index1 = i;
            }
        }

        return arr;
    }
};