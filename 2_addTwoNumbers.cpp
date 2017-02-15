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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode sum(-1), *p=&sum;
        int adding=0;
        while (l1||l2||adding){
            p->next=new ListNode((adding+(l1?l1->val:0)+(l2?l2->val:0))%10);
            adding=(adding+(l1?l1->val:0)+(l2?l2->val:0))/10;
            l1=(l1?l1->next:l1);
            l2=(l2?l2->next:l2);
            p=p->next;
        }
        return sum.next;
    }
};
