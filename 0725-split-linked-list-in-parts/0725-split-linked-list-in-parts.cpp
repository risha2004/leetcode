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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       
         ListNode* current=head;
        int n=0;
        while(current){
            current=current->next;
            n++;
        }
        auto [q, r]=div(n, k);
       
        vector<int> iLen(k, q);
        fill(iLen.begin(), iLen.begin()+r, q+1);
        vector<ListNode*> ans(k);
        current=head;
        for(int i=0; i<k; i++){
            ans[i]=current;
            for (int j=0; j < iLen[i]-1; j++) {
                current=current->next;
            }
            if (current) { 
                ListNode* prev=current; 
                current=current->next;
                prev->next=NULL; 
            }
        }
        return ans;
       
        
        
        
        
        
    }
};