
class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> arr;

        int w = 0, l = 0;
        int mini = INT_MAX;

        for(int i = 1; i <= sqrt(area); i++) {
            if(area % i == 0) {

                int width = i;
                int length = area / i;

                if(length - width < mini) {
                    mini = length - width;
                    l = length;
                    w = width;
                }
            }
        }

        arr.push_back(l);
        arr.push_back(w);

        return arr;
    }
};
