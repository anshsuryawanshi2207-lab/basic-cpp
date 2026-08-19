/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int n1 = 0, n2 = 0;

        // Find length of A
        while (temp1 != nullptr) {
            n1++;
            temp1 = temp1->next;
        }

        // Find length of B
        while (temp2 != nullptr) {
            n2++;
            temp2 = temp2->next;
        }

        // Reset pointers
        temp1 = headA;
        temp2 = headB;

        // Move longer list ahead
        if (n1 > n2) {
            int diff = n1 - n2;

            while (diff--) {
                temp1 = temp1->next;
            }
        }
        else {
            int diff = n2 - n1;

            while (diff--) {
                temp2 = temp2->next;
            }
        }

        // Find intersection
        while (temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;
    }
};