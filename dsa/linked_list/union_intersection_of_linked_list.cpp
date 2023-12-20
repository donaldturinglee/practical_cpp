/**
 * Title: Union of Linked Lists
 * Description: You will now be implementing the removeDuplicates() function. When a linked list is passed to this function, it removes any node which is a duplicate of another existing node.
 * Author: Donald Lee
 */

string Union(LinkedList list1, LinkedList list2) {
    if (list1.isEmpty()) return list2;
    if (list2.isEmpty()) return list1;

    Node* start = list1.head;
    while (start->nextElement != nullptr) start = start->nextElement;
    start->nextElement = list2.head;
    return list1.removeDuplicates();
}