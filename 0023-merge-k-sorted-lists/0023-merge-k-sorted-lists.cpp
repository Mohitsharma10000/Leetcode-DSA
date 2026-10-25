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
ListNode* merge(ListNode* l1,ListNode* l2){
    ListNode* dummy=new ListNode(-1);
    ListNode* prev=dummy;
    while(l1&&l2){
        if(l1->val<l2->val){
            prev->next=l1;
            prev=prev->next;
            l1=l1->next;
        }
        else {
            prev->next=l2;
            prev=prev->next;
            l2=l2->next;
            
        }
    }
    if(l1) prev->next=l1;
    else prev->next=l2;

    return dummy->next;
}
ListNode* sortlist(ListNode* head){
    if(!head||!head->next) return head;
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* second=slow->next;
    slow->next=nullptr;
    ListNode*left=sortlist(head);
    ListNode* right=sortlist(second);
    return merge(left,right);
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     if(lists.size()==0) return nullptr;
     ListNode* dummy=new ListNode(-1);
     ListNode* head=dummy;
     for(int i=0;i<lists.size();i++){
        head->next=lists[i];
        while(head->next!=nullptr){
            head=head->next;
        }
     }
     head=dummy->next;
     return sortlist(head);

     

    }
};