/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL)
        return head;

        Node * curr= head;
        while(curr!=NULL){

            if(curr->child!=NULL){
                Node * next= curr-> next;// save the original next node

                //flatten child and attach it after curr
                curr->next= flatten(curr->child);
                curr->next->prev= curr;

                // remove child pointer
                curr->child=NULL;
           
           Node * temp = curr->next;

            // t=dealing with the tail node
            while(temp->next !=NULL){
                temp = temp->next;}


                if(next!=NULL){
                    temp->next= next;
                    next->prev= temp;
                }
            }
                curr= curr->next;
                
        }
   return head;
     }
};