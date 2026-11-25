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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* slow = head;       // odd index
        ListNode* fast = head->next; // even index
        ListNode* even = fast;       // also even index

        while (fast != nullptr && fast->next != nullptr) {
            slow->next = fast->next;
            slow = slow->next;
            fast->next = slow ->next;
            fast = fast->next;
            
        }

        slow->next = even;

        return head;
    }
};