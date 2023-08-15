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

    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int>vec1;
        vector<int>vec2;
        while(temp!=NULL){
            if(temp->val < x) vec1.push_back(temp->val);
            else {vec2.push_back(temp->val);}
            temp=temp->next;
        }
        temp=head;
        int it1 = 0;
        int it2 = 0;
        while(temp!=NULL){
            if(it1 < vec1.size()){
                temp->val = vec1[it1++];
            }
            else {
                temp->val = vec2[it2++];
            }
            temp=temp->next;
        }
        return head;
    }
};