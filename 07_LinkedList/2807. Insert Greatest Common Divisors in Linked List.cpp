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
    ListNode* gcd(int n1, int n2) {
        while (n2 != 0) {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }

        return new ListNode(n1);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if (head == nullptr)
            return head;

        ListNode* curr = head;
        while (curr->next != nullptr) {
            ListNode* temp = curr->next;
            ListNode* g = gcd(curr->val, curr->next->val);
            curr->next = g;
            g->next = temp;

            curr = temp;
        }

        return head;
    }
};