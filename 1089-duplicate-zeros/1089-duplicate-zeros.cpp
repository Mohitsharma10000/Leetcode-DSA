class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp=arr;
        int index=0,i=0;
        while(index<arr.size()){
            arr[index++]=temp[i];
            if(temp[i]==0&&index<arr.size()){
                arr[index++]=0;
            }
            i++;
        }
        
    }
};