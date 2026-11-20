class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* point = head;

        int len = 0;
        while (fast->next->next != nullptr) {
            fast = fast->next;
            len++;
        }
        len = len + 2;
        k = k % len;
        k = k % len;

        if (k == 0)
            return head;

        // ListNode* newHead = fast->next;

        // newHead->next = slow;
        // fast->next = nullptr;

        // tail
        fast = fast->next;

        int count = 1;
        // new tail position
        while (count != len - k) {
            slow = slow->next;
            count++;
        }
        point = slow->next;
        fast->next = head;
        slow->next = nullptr;

        return point;
    }
};