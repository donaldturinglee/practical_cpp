/**
 * Title: Find Middle Node of Linked List
 * Description: You have to implement the findMid() function which is a member function of a LinkedList and it should return the value of the middle node.
 * Author: Donald Lee
 */

int findMid() {
    if (isEmpty()) return 0;
    Node* curr = head;
    if (curr->nextElement == nullptr) return curr->data;

    Node* mid = curr;
    curr = curr->nextElement->nextElement;

    while (curr != nullptr) {
        mid = mid->nextElement;
        curr = curr->nextElement;
        if (curr != nullptr) curr = curr->nextElement;
    }

    if (mid != nullptr) return mid->data;

    return 0;
}