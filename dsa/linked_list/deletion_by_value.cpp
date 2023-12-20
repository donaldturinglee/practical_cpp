/**
 * Title: Deletion by Value
 * Description: You will now implement the Delete(int value) function, which will take an integer value and delete the node containing it.
 * Author: Donald Lee
 */

bool Delete(int value) {
    if (isEmpty()) return false;
    Node* temp = head;
    Node* prev = nullptr;
    if (temp->data == value) {
        deleteAtHead();
        return true;
    } else {
        prev = temp;
        temp = temp->nextElement;
        while (temp != nullptr) {
            if (temp->data == value) {
                prev->nextElement = temp->nextElement;
                delete temp;
                temp = prev->nextElement;
                return true;
            }
            prev = temp;
            temp = temp->nextElement;
        }
    }
    return false;
}