
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size()) return NULL;
        ListNode* pre=new ListNode(0), *p=pre;
        priority_queue<int,vector<int>,greater<int>> pq;
        // Initialize pq
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL) {
                pq.push(lists[i]->val);;
            }
        }
        
        while(!pq.empty()){
            for(int i=0;i<lists.size();i++){
                if(lists[i]!=NULL) {
                    if(lists[i]->val==pq.top()) {
                        p->next=new ListNode(pq.top());
                        p=p->next;
                        lists[i]=lists[i]->next;
                        if(lists[i]!=NULL) pq.push(lists[i]->val);
                        pq.pop();
                    }
                }
            }
            
        }
        return pre->next;
    }
};
