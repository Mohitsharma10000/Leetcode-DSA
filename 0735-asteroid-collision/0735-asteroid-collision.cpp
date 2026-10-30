class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>arr;
        
        for(int i=0;i<asteroids.size();i++){
            bool destroyed=false;
            if(asteroids[i]<0){
                if(!st.empty()){
                    if(st.top()>0){
                       while(!st.empty()&&st.top()>0){
                        if(st.top()<-(asteroids[i])) st.pop();
                        else if(st.top()==abs(asteroids[i])){
                            st.pop();
                            destroyed=true;
                            break;
                        }
                        
                        else {destroyed=true; break;}
                       }
                       if(!destroyed) st.push(asteroids[i]);
                    }
                    else st.push(asteroids[i]);
                }
                else st.push(asteroids[i]);
            }
            else st.push(asteroids[i]);


        }
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(),arr.end());
        return arr;
        
    }
};