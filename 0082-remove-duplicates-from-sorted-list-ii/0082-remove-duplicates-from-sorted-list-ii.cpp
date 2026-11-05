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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        while (prev->next != nullptr) {
            ListNode* curr = prev->next;
            if (curr->next != nullptr && curr->val == curr->next->val) {
                int duplicate_val = curr->val;
                while (curr != nullptr && curr->val == duplicate_val) {
                    ListNode* temp = curr;
                    curr = curr->next;
                    delete temp; 
                }
                prev->next = curr;
            } else {
                prev = prev->next;
            }
        }

        return dummy.next;
    }
};