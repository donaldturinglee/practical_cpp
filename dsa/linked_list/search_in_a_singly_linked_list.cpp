/**
 * Title: Search in a Singly Linked List
 * Description: To search for a specific value in a linked list
 * Author: Donald Lee
 */

bool search(int value) {
    if (isEmpty()) return false;
    else {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) return true;
            temp = temp->nextElement;
        }
        return false;
    }
}