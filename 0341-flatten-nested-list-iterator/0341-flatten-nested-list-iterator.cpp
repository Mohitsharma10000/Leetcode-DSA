class NestedIterator {
    queue<int> q;

    void solve(vector<NestedInteger>& nestedList) {
        for(auto &x : nestedList) {

            if(x.isInteger()) {
                q.push(x.getInteger());
            }
            else {
                vector<NestedInteger> temp = x.getList();
                solve(temp);
            }
        }
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        solve(nestedList);
    }

    int next() {
        int x = q.front();
        q.pop();
        return x;
    }

    bool hasNext() {
        return !q.empty();
    }
};