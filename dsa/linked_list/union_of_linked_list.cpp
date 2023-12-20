/**
 * Title: Union of Linked Lists
 * Description: Union and intersection are two of the most popular operations which can be performed on data sets. Now, you will be implementing them for linked lists! Let’s take a look at their definitions:
 * Author: Donald Lee
 */

string Union(LinkedList list1, LinkedList list2) {
    if (list1.isEmpty()) return list2.elements();
    if (list2.isEmpty()) return list1.elements();

    Node* start = list1.head;
    while (start->nextElement != nullptr) start = start->nextElement;
    start->nextElement = list2.head;
    return list1.removeDuplicates();
}