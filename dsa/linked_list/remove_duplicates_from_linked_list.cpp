/**
 * Title: Remove Duplicates from Linked List
 * Description: You will now be implementing the removeDuplicates() function. When a linked list is passed to this function, it removes any node which is a duplicate of another existing node.
 * Author: Donald Lee
 */

string removeDuplicates() {
    Node* curr = head;
    while (curr != nullptr && curr->nextElement != nullptr) {
        Node* next = curr;
        while (next->nextElement != nullptr) {
            if (next->nextElement->data == curr->data) {
                Node* temp = next->nextElement;
                next->nextElement = next->nextElement->nextElement;
                delete(temp);
            } else {
                next = next->nextElement;
            }
        }
        curr = curr->nextElement;
    }
}