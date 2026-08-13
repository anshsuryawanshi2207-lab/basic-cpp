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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp= head;
        int cnt =0;
        while(tmp!=nullptr)
        {cnt++;
        tmp=tmp->next;
        }
        int mid=cnt/2;
        tmp=head;
        while(mid--){
            tmp=tmp->next;
        }

        return tmp;


        
    }
};