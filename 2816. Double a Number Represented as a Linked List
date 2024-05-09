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
    ListNode* doubleIt(ListNode* head) {
        stack<int>values;
        int val = 0;
        while(head){
            values.push(head -> val);
            head = head -> next;
        }
        ListNode *newNode = NULL;
        while(!values.empty() || val != 0){
            newNode = new ListNode(0, newNode);
            if(!values.empty()){
                val += values.top() * 2;
                values.pop();
            }
            newNode -> val = val % 10;
            val /= 10;
        }
        return newNode;
    }
};
