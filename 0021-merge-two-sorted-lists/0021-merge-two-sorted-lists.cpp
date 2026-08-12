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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp1= list1;
        ListNode* tmp2= list2;
        ListNode* res=new ListNode(-1);
        ListNode* temp= res;
        if(tmp1==nullptr&&tmp2==nullptr)
        return res->next;
        while(tmp1!=nullptr&&tmp2!=nullptr){
          
            
            if(tmp1->val<=tmp2->val){
                temp->next=tmp1;
                temp=temp->next;
                tmp1=tmp1->next;
                
            }
            else{
                temp->next=tmp2;
                temp=temp->next;
                tmp2=tmp2->next;
            }
        }
        if (tmp1 != nullptr)
            temp->next = tmp1;
        else
            temp->next = tmp2;
        return res->next;
    }
};