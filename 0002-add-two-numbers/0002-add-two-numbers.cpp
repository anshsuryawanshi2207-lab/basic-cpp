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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyhead=new ListNode(-1);
        ListNode* curr=dummyhead;
        ListNode* tmp1= l1;
        ListNode*tmp2=l2;
        int carry=0;
        while(tmp1!=nullptr|| tmp2!=nullptr){
            int sum =carry;
            if(tmp1) sum+=tmp1->val;
            if(tmp2) sum+=tmp2->val;
            ListNode* newnode= new ListNode(sum%10);
            carry=sum/10;

            curr->next=newnode;
            curr=newnode;
            if(tmp1) tmp1=tmp1->next;
            if(tmp2) tmp2=tmp2->next;


        }

        if(carry){
            ListNode*  newnode= new ListNode(carry);
            curr->next=newnode;
        }
      return dummyhead->next;  
    }
};