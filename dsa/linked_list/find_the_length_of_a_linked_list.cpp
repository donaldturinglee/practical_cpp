/**
 * Title: Find the Length of a Linked List
 * Description: implement the length() function which will find length of a given linked list.
 * Author: Donald Lee
 */

int length() {
    int count = 0;
    Node* temp = head;
    while (head != nullptr) {
        ++count;
        temp = temp->nextElement;
    }
    return count;
}