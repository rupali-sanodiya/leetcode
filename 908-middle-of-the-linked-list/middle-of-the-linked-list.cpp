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
    ListNode* middleNode(ListNode* head) {
     ListNode* current=head;
     int length=0;
     while(current!=NULL){
        current=current->next;
        length++;
     }
     int n=length/2;
    //  current ko rediclaid karna padta hai kiyoki zero ho jata he
     current=head;
     for(int i=0;i<n;i++){
        current=current->next;
     }
     return current;
    }
};