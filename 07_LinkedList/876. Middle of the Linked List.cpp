class Solution {
public:
    int lengthll(ListNode* head) {
        int count = 0;

        while(head != nullptr) {
            count++;
            head = head->next;
        }

        return count;
    }

    ListNode* middleNode(ListNode* head) {

        int len = lengthll(head);
        int m = len / 2;

        int c = 0;

        while(c < m) {
            head = head->next;
            c++;
        }

        return head;
    }
};