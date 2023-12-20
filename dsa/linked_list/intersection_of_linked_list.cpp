/**
 * Title: Union of Linked Lists
 * Description: Union and intersection are two of the most popular operations which can be performed on data sets. Now, you will be implementing them for linked lists! Let’s take a look at their definitions:
 * Author: Donald Lee
 */

string Intersection(LinkedList list1, LinkedList list2) {
    LinkedList list3;
    Node* t1 = list1.head;
    Node* t2 = list2.head;

    while (t1 != nullptr) {
        while (t2 != nullptr) {
            if (t1->data == t2->data) list3.insertAtHead(t1->data);
            t2 = t2->nextElement;
        }
        t2 = list2.head;
        t1 = t1->nextElement;
    }
    list3.removeDuplicates();

    return list3.elements()
}