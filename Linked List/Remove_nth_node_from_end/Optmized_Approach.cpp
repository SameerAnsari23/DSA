class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create dummy node to handle the edge case
        ListNode* dummy = new ListNode(0, head);

        // Initialize two pointer variable at dummy
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Traverse in linked list
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
      
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
      
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;                   // Free memory
      
        return dummy->next; 
    }
};
