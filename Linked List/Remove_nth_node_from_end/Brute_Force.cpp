class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // If list is empty, return NULL
        if (head == NULL) {
            return NULL;
        }

        int cnt = 0;
        ListNode* temp = head;

        // Count nodes
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        // If N equals cnt, delete the head
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;             // free memory
            return newHead;
        }

        // Calculate the position
        int res = cnt - n;
        temp = head;

        // Traverse to the node just before the one to delete
        while (temp != NULL) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }

        // Delete the target node
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;            // free memory

        return head;
    }
};
