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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return NULL;
        }
           struct Compare {
            bool operator()(ListNode* a, ListNode* b) {
                return a->val > b->val;
            }
    };

    priority_queue<ListNode*, vector<ListNode*>, Compare> minHeap;
    
    for(int i=0; i<lists.size(); i++){
    if(lists[i]!=NULL){
        minHeap.push(lists[i]);
    }
}

ListNode*head=nullptr;
ListNode* tail=nullptr;

while(!minHeap.empty()){
   ListNode* minNode = minHeap.top();
   minHeap.pop();

   if(head==nullptr){
    head = minNode;
    tail = head;
   }else{
    tail->next = minNode;
    tail = tail->next;
   }

   if(minNode->next!= NULL){
    minHeap.push(minNode->next);
   }
}
   
  return head;
    
}
};

 