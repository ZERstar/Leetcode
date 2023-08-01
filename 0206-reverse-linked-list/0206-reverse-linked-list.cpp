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
        ListNode* C = head;
        ListNode* P = NULL;
        ListNode* N;
        while(C != NULL){
            N = C->next;
            C->next = P;
            P = C;
            C = N;
        }
        return head = P;
    }
};