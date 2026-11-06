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
    int lenghtll(ListNode* head)
    {
        int count=0;
        while(head!=nullptr)
        {
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = lenghtll(head);
        int m = len-n+1;
        ListNode* curr =head;
        ListNode* prev =nullptr;
        int c = 1;
        while(c!=m)
        {
            prev=curr;
            curr=curr->next;
            c++;
        }
           if(prev == nullptr)
        {
            head = curr->next;
            delete curr;
            return head;
        }
        prev->next = curr->next;
        delete curr;


        return head;

        

    }
};