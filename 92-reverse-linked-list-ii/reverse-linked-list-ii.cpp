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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* current=head;
            ListNode* dummy=new ListNode(0);
            dummy->next=current;
            ListNode* prev=dummy;
         if(!current||left==right){
            return current;
            }
            for(int i=0;i<left-1;i++){
               prev=prev->next;
            }
       current=prev->next;
       ListNode* tail=current;
       ListNode* predata=NULL;
       ListNode* data=NULL;
       for(int i=0;i<=right-left;i++){
        data=current->next;
        current->next=predata;
        predata=current;
        current=data;
       }
       prev->next=predata;
       tail->next=current;
        
        return dummy->next;
    }
};