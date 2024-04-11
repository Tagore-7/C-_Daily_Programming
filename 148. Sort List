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
    ListNode* sortList(ListNode* head) {
        if (!head) return head;
        
        vector<int> nums;
        while (head) {
            nums.push_back(head->val);
            head = head->next;
        }
        
        sort(nums.begin(), nums.end());
        ListNode *dummy = new ListNode(-1);
        ListNode *current = dummy;
        for(int i = 0; i < nums.size(); i++){
            current -> next = new ListNode(nums[i]);
            current = current -> next;
        }
        return dummy -> next;
    }
};
