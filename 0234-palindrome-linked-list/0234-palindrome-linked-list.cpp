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

ListNode* reverse_list(ListNode *head){
    if(head == NULL || head->next == NULL)
    return head;

    ListNode* newHead = reverse_list(head->next);
    ListNode* front = head->next;
    

    front->next = head;
    head->next = NULL;
    
    return newHead;
}


class Solution {
public:
    bool isPalindrome(ListNode* head) {
    ListNode *fast, *slow;
    fast = slow = head;

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow  = slow->next;
    }
    ListNode *newHead = reverse_list(slow->next);
    slow = head;
    while(newHead != NULL){

        if(slow->val != newHead->val)
        return false;

        slow=slow->next;
        newHead=newHead->next; 
    }
        
        
        
    return true;
    }
};