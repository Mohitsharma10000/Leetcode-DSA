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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        while (l1 && l2) {
            prev->next = l1;
            prev=prev->next;
            l1 = l1->next;
            prev->next = l2;
            prev=prev->next;
            l2 = l2->next;
        }
        if (l1)
            prev->next = l1;
        else
            prev->next = l2;

        return dummy->next;
    }
    ListNode* reverse(ListNode* l1) {
        ListNode* prev = nullptr;
        ListNode* curr = l1;
        while (curr != nullptr) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
           
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* left = head;
        ListNode* right = reverse(second);
        ListNode* temp = merge(left, right);
        head=temp;
    }
};