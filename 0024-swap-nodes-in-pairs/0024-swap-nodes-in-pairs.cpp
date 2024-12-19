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
    ListNode* swapPairs(ListNode* head) {
       ListNode* dummy = new ListNode(0);
       dummy ->next = head;
       ListNode* temp = dummy;
        ListNode* node1;
        ListNode* node2;
        while(temp->next && temp->next->next){
            node1 = temp->next;
             node2 = temp->next->next;
              node1->next = node2->next;
              node2->next =node1;
              temp ->next =node2;
              temp = node1;
        }
        return dummy->next;
    }
};