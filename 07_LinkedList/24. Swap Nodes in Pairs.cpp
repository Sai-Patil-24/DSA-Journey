
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while (prev->next != nullptr &&
               prev->next->next != nullptr)
        {
            ListNode* slow = prev->next;
            ListNode* fast = slow->next;

            slow->next = fast->next;
            fast->next = slow;
            prev->next = fast;

            prev = slow;
        }

        return dummy.next;
    }
};
