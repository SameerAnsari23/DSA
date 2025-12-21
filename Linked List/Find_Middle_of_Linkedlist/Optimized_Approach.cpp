// Tortoise-Hare Algorithm
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Initially present at head
        ListNode* tortoise = head;
        ListNode* rabbit = head;

        // Traverse
        while(rabbit != NULL && rabbit->next != NULL) {
            tortoise = tortoise->next;       // Tortoise move one step
            rabbit = rabbit->next->next;     // Rabbit move two step
        }

        // Return middle node
        return tortoise;
    }
};
