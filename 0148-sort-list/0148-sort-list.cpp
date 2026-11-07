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
    ListNode* sortList(ListNode* head) {
        vector<int> vals;
        for (ListNode* curr = head; curr; curr = curr->next) {
            vals.push_back(curr->val);
        }
        sort(vals.begin(), vals.end());
        ListNode* curr = head;
        for (int v : vals) {
            curr->val = v;
            curr = curr->next;
        }
        return head;
    }
};