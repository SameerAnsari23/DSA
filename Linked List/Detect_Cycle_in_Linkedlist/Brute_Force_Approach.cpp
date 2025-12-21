class Solution {
public:
    bool hasCycle(ListNode* head) {
        // Initialize a temp pointer variable at head
        ListNode* temp = head;

        // Create a map to keep track of visited nodes
        unordered_map<ListNode*, int> mp;

        // Traverse the linked list
        while (temp != NULL) {
            // If node already exists in map, loop detected
            if (mp.find(temp) != mp.end()) {
                return true;
            }
          
            // Store the current node in the map
            mp[temp] = 1;

            // Move to the next node
            temp = temp->next;
        }

        // If traversal completes, no loop detected
        return false;
    }
};
