class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp != nullptr) {

            if (temp->val == val) {

                // If deleting head
                if (prev == nullptr) {
                    head = temp->next;
                    delete temp;
                    temp = head;
                }

                // If deleting a middle/end node
                else {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                }
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};