// Tortoise-Hare Algorithm
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Initially both pointer variable present at head
        ListNode* tortoise = head;
        ListNode* rabbit = head;

        // Traverse in Linkedlist
        while(rabbit != NULL  && rabbit->next != NULL) {
            tortoise = tortoise->next;           // Tortoise move one step
            rabbit = rabbit->next->next;         // Rabbit move two step

            // Check, Both collide
            if(rabbit == tortoise) return true;  // Loop Deteced
        }

        // Loop is not detected
        return false;
    }
};
