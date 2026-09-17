class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int left = 0;
        int right = 0;

        while (left < version1.size() || right < version2.size()) {
            
            string st1 = "";
            string st2 = "";

            
            while (left < version1.size() && version1[left] != '.') {
                st1 += version1[left];
                left++;
            }

            
            while (right < version2.size() && version2[right] != '.') {
                st2 += version2[right];
                right++;
            }

            int i = st1.empty() ? 0 : stoi(st1);
            int j = st2.empty() ? 0 : stoi(st2);

            if (i > j)
                return 1;

            if (i < j)
                return -1;

            
            if (left < version1.size())
                left++;

            if (right < version2.size())
                right++;
        }

        return 0;
    }
};