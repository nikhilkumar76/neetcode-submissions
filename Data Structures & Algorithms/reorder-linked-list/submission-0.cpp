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
        if(!head || !head->next) return;
        //middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse of the next half linked list
        ListNode* curr = slow->next;
        slow->next = NULL;
        ListNode* prev = 0;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        //merge two halfs
        ListNode* first = head;
        ListNode* second = prev;
        while(second){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            second = temp2;
            first = temp1;
        }
    }
};
