class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        vector<int> arr;

        // Store odd-position nodes
        ListNode* tmp = head;

        while (tmp != nullptr && tmp->next != nullptr) {
            arr.push_back(tmp->val);
            tmp = tmp->next->next;
        }

        if (tmp != nullptr)
            arr.push_back(tmp->val);

        // Store even-position nodes
        tmp = head->next;

        while (tmp != nullptr && tmp->next != nullptr) {
            arr.push_back(tmp->val);
            tmp = tmp->next->next;
        }

        if (tmp != nullptr)
            arr.push_back(tmp->val);

        // Put values back into linked list
        int i = 0;
        tmp = head;

        while (tmp != nullptr) {
            tmp->val = arr[i];
            i++;
            tmp = tmp->next;
        }

        return head;
    }
};