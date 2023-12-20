/**
 * Title: Reverse a Linked List
 * Description: You have to write the reverse function, which starts iterating from the head and swap nodes of the list, such that, in the end, it returns a string which contains a reversed list.
 * Author: Donald Lee
 */

string reverse() {
    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr) {
        Node* next = curr->nextElement;
        curr->nextElement = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return elements();
}