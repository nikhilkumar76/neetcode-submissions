class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            size++;
        }
        if(n == size) return head->next;
        ListNode* curr = head;
        for(int i=1; i<size-n; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};
