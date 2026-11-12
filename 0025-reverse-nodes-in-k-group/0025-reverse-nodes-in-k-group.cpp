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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vals;
        for (ListNode* curr = head; curr != nullptr; curr = curr->next) {
            vals.push_back(curr->val);
        }
        for (int i = 0; i + k <= vals.size(); i += k) {
            reverse(vals.begin() + i, vals.begin() + i + k);
        }
        ListNode* curr = head;
        for (int v : vals) {
            curr->val = v;
            curr = curr->next;
        }

        return head;
    }
};