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
        int res = 0, sum;
        ListNode *l = NULL, *p, *h;
        while(l1 || l2 || res){
            sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            if(res){
                sum += res;
            }
            p = new ListNode(sum % 10);
            res = sum / 10;
            if(l == NULL){
                l = p;
                h = p;
            }else{
                l->next = p;
                l = l->next;
            }
        }
        return h;
    }
};
