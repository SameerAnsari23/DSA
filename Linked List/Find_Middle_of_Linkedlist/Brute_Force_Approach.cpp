ListNode *middleNode(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* temp = head;
    int count = 0;

    // Count the number of nodes in the linked list.
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Calculate the position of the middle node.
    int mid = count / 2 + 1;
    temp = head;

    // Traverse to the middle node 
    while (temp != null) {
        mid = mid - 1;

        // Check if the middle reached
        if (mid == 0){
            // break out of the loop
            break;
        }
        temp = temp->next;
    }

    // Return the middle node.
    return temp;
}
