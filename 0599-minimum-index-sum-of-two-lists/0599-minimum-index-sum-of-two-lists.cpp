class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        vector<string> arr;
        int mini = INT_MAX;
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    if (i + j <mini) {
                        mini = i + j;
                        if (arr.empty())
                            arr.push_back(list1[i]);
                        else {
                            arr.pop_back();
                            arr.push_back(list1[i]);}
                        
                    }
                    else if(i+j==mini){
                        arr.push_back(list1[i]);
                    }
                }
            }
        }
        return arr;
    }
}

;