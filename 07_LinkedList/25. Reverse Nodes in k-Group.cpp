class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Step 1: check that k nodes exist
        ListNode* node = head;
        for (int i = 0; i < k; i++) {
            if (!node) return head;   // fewer than k left -> leave as is
            node = node->next;
        }

        // Step 2: reverse k nodes
        ListNode* prev = nullptr;
        ListNode* curr = head;
        for (int i = 0; i < k; i++) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        // Step 3: old head is now the tail; attach the rest
        head->next = reverseKGroup(curr, k);
        return prev;   // new head of this group
    }
};