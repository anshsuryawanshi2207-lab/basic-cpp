class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // Make a copy
        ListNode* copyHead = nullptr;
        ListNode* copyTail = nullptr;

        ListNode* temp = head;

        while (temp != nullptr) {

            ListNode* newNode = new ListNode(temp->val);

            if (copyHead == nullptr) {
                copyHead = newNode;
                copyTail = newNode;
            }
            else {
                copyTail->next = newNode;
                copyTail = newNode;
            }

            temp = temp->next;
        }

        // Reverse the copy
        ListNode* prev = nullptr;
        ListNode* curr = copyHead;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare original and reversed copy
        ListNode* original = head;
        ListNode* reversed = prev;

        while (original != nullptr && reversed != nullptr) {

            if (original->val != reversed->val)
                return false;

            original = original->next;
            reversed = reversed->next;
        }

        return true;
    }
};