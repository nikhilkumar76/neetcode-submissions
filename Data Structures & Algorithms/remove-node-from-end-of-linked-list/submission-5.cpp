class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head, *temp2 = head;
        for(int i=0; i<n; i++) temp1 = temp1->next;
        if(!temp1) return head->next;
        while(temp1->next){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
