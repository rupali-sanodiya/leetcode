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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current=head;
        int length=0;
        while(current!=NULL){
            length++;
            current=current->next;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        current=dummy;
        for(int i=0;i<length-n;i++){
            current=current->next;
        }
        current->next=current->next->next;
        return dummy->next;
    }
};