/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int pos = 1;
        int first = -1;
        int previous = -1;
        int mindist = INT_MAX;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr != nullptr && curr->next != nullptr) {
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {
                if (first == -1) {
                    first = pos + 1;
                }
                if (previous != -1) {
                    mindist = min(mindist, (pos + 1) - previous);
                }
                previous = pos + 1;
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }
        if (first == -1 || first == previous) {
            return {-1, -1};
        }
        int maxdist = previous - first;
        return {mindist, maxdist};
    }
};