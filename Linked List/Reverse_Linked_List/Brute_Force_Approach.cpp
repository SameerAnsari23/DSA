class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;

        // Traverse on Linked list and store element in stack
        while(temp != NULL) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Update the value of linked list from topmost value of stack
        temp = head;
        while (temp != NULL) {
            temp->val = st.top();
            temp = temp->next;
            st.pop();
        }
      
        return head;
    }
};
