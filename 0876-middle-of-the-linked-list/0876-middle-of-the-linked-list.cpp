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
    ListNode* middleNode(ListNode* head) {
        int num = 0;
        ListNode* dummy = head;
        while (dummy != NULL) {
            dummy = dummy->next;
            num++;
        }
        for (int i = 1; i < (num + 0.5) / 2; i++)
            head = head->next;
        return head;
    }
};