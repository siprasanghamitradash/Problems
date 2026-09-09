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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(0,head);
        ListNode *check = head;
        ListNode *nex = dummy;
        while(check!=NULL){
            if(check->val==val){
                nex->next = check->next;
            }else{
                nex=check;
            }
            check=check->next;    
        }
        return dummy->next;
    }
};
