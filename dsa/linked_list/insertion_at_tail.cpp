/**
 * Title: Insertion at Tail
 * Description: It will take an integer as an input parameter and insert a node containing that value at the end of the list.
 * Author: Donald Lee
 */

void insertAtTail(int value) {
    if (isEmpty()) insertAtHead(value);
    else {
        Node* newNode = new Node();
        newNode->data = value;
        Node* temp = head;
        while (temp->nextElement != nullptr) temp = temp->nextElement;
        temp->nextElement = newNode;
        newNode->nextElement = nullptr;
        temp = newNode;
    }
}