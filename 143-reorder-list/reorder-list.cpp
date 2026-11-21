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
    void reorderList(ListNode* head) {
       vector<ListNode*>seen;
        ListNode* current=head;
        while(current!=NULL){
            seen.push_back(current);
            current=current->next;
        }
        current=head;
   int slow=0;
   int fast=(int)seen.size()-1;
 while(slow<fast){
    seen[slow]->next=seen[fast];
    slow++;
    if(slow==fast){
      break;  
    }
    seen[fast]->next=seen[slow];
    fast--;
 
 }
 seen[slow]->next=NULL;
  }
    
};