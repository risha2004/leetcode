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
    void deleteNode(ListNode* node) {
   /*     node* temp = head;
 if(head == null || head -> null ) return null;

 if(head -> data == node){
    node* temp = head;
   head = head -> next;
   free(temp);
   return (head); 
 }
 node* temp = head;
 node* prev = null;
 while(temp != null){
    if(temp ->next == node)
    {
    prev -> next = prev -> next -> next;
    free(temp);
    break;
    }
    prev = temp;
    temp = temp ->next 

 }
return head;
        
    }*/
        node->val=node->next->val;
        node->next=node->next->next;
    }
};