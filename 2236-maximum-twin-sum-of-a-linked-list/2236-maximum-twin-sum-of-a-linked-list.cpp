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
    int pairSum(ListNode* head) {
    if (head -> next ->next == nullptr ){
        return head->val + head ->next ->val;
    }   
    int maxi =0;
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* cur = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next ->next;
    }
    ListNode* prev = nullptr;

    while(slow!= fast){
        ListNode* front = slow->next;
        slow->next = prev;
        prev = slow;
        slow = front;
    }
    while(prev){
        maxi = max( maxi, (cur -> val + prev->val));
        prev = prev ->next ;
        cur = cur->next;
    }
    return maxi;
    }
};