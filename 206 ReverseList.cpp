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
    ListNode* reverseList(ListNode* head) {
          
          ListNode *prev = NULL;
          ListNode *crt = head;
          while(crt != NULL){
            ListNode *frwd=crt->next;
            crt->next=prev;
            prev=crt;
            crt=frwd;
          }
          return prev;
    }
};
