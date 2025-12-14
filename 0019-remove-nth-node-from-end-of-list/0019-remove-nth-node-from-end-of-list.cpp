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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if (!head) return nullptr;

        int t = 0;
        ListNode* curr = head;

        while (curr) {
            t++;
            curr = curr->next;
        }

        if (n == t) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        curr = head;
        for (int i = 1; i < t - n; i++) {
            curr = curr->next;
        }

        ListNode* del = curr->next;
        curr->next = del->next;
        delete del;

        return head;
    }
};