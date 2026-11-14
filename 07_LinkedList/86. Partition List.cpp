
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* small = new ListNode(0);
        ListNode* greater = new ListNode(0);

        ListNode* smallTail = small;
        ListNode* greaterTail = greater;

        ListNode* curr = head;

        while (curr != nullptr) {

            if (curr->val < x) {
                smallTail->next = curr;
                smallTail = smallTail->next;
            }
            else {
                greaterTail->next = curr;
                greaterTail = greaterTail->next;
            }

            curr = curr->next;
        }

        // Terminate the greater list
        greaterTail->next = nullptr;

        // Connect both lists
        smallTail->next = greater->next;

        return small->next;
    }
};
