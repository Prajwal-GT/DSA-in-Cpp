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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> num1, num2;
        while (l1 != nullptr) {
            num1.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            num2.push_back(l2->val);
            l2 = l2->next;
        }

        int i = num1.size() - 1; 
        int j = num2.size() - 1; 
        int carry = 0;
        ListNode* head = nullptr;
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i];
                i--;
            }
            if (j >= 0) {
                sum += num2[j];
                j--;
            }
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next = head;
            head = newNode;
        }

        return head;
    }
};