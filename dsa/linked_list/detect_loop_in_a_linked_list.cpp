/**
 * Title: Detect Loop in a Linked List
 * Description: You must implement the detectLoop() function which will take a linked list as input and deduce whether or not a loop is present.
 * Author: Donald Lee
 */

bool detectLoop() {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->nextElement != nullptr) {
        slow = slow->nextElement;
        fast = fast->nextElement->nextElement;
        if (slow == fast) return true;
    }
    return false;
}