class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        //middle of the Linked List
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        //Reverse the second half
        ListNode* curr = slow->next;
        slow->next = NULL;
        ListNode* prev = 0;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        //Merge the next two List
        ListNode* first = head;
        ListNode* second = prev;
        while(second){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
