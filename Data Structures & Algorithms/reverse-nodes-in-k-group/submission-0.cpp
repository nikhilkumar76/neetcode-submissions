class Solution {
public:
    ListNode* reverse(ListNode* head, int size){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(size--){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* left = head;
        ListNode* right;
        ListNode* prevLeft = NULL;
        ListNode* res = NULL;
        while(true){
            right = left;
            for(int i=0; i<k-1; i++){
                if(!right) break;
                right = right->next;
            }
            if(right){
                ListNode* nextLeft = right->next;
                ListNode* newHead = reverse(left, k);
                if(prevLeft) prevLeft->next = newHead;
                else res = newHead;

                left->next = nextLeft;
                prevLeft = left;
                left = nextLeft;
            }
            else{
                if(prevLeft) prevLeft->next = left;
                if(res==NULL) res = left;
                break;
            }
        }
        return res;
    }
};
