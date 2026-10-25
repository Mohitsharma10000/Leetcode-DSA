class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* temp = curr->next;

            while (temp != nullptr && curr->val >= temp->val) {
                temp = temp->next;
            }

            if (temp != nullptr)
                ans.push_back(temp->val);
            else
                ans.push_back(0);

            curr = curr->next;
        }

        return ans;
    }
};