class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp1 = head;          // odd
        ListNode* temp2 = head->next;    // even
        ListNode* evenHead = temp2;      // first even node

        // Odd positions
        while (temp2 != nullptr && temp2->next != nullptr) {

            temp1->next = temp2->next;
            temp1 = temp1->next;

            temp2->next = temp1->next;
            temp2 = temp2->next;
        }

        // Odd list ke end par even list attach
        temp1->next = evenHead;

        return head;
    }
};