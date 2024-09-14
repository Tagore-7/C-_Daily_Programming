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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> ans;
        while(head){
            if(ans[head] > 0){
                return true;
            }
            ListNode *index = head;
            ans[index]++;
            head = head ->next;
        }
        return false;
    }
};
