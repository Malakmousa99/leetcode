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
    
    if(head == nullptr || head->next == nullptr) return;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!= nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }//O(n)

         ListNode* current = slow->next;
         slow->next = nullptr;

        ListNode* prev = nullptr;

         while(current != nullptr){
             ListNode* temp = current->next;
             current->next = prev;
             prev = current;
             current = temp;

         }//O(n)

         ListNode* p1 = head;
         ListNode* p2 = prev;
         
         while(p2 != nullptr){
            ListNode* temp = p1->next;
            p1->next = p2;
            p1=p2;
            p2=temp;

         }//O(n)
        
    }
};