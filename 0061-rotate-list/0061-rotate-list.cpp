class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;

        int n = 1;
        ListNode* curr = head;

        while (curr->next != nullptr) {
            curr = curr->next;
            n++;}

        k = k % n;
        if (k == 0) 
        return head;
        ListNode* temp = head;
        for (int i = 1; i < n - k; i++) {
            temp = temp->next;
        }
        ListNode* nn = temp->next;
        temp->next = nullptr;      
        curr->next = head;        
        return nn;
    }
};
