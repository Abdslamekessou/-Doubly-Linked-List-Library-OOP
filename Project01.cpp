
#include <iostream>
#include "clsDblLinkedList.h"


using namespace std;

int main()
{
    clsDblLinkedList <int> MyDblLinkedList;

    if (MyDblLinkedList.IsEmpty()) 
    {
        cout << "\n\nYes , List Is Empty. \n\n";
    }
    else 
    {
        cout << "\n\nNo , List Is Not Empty. \n\n";
    }

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "Linked List Content : \n";
    MyDblLinkedList.PrintList();


    clsDblLinkedList<int>::Node * N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL) 
    {
        cout << "\n\nNode Found :-)\n";
    }
    else 
    {
        cout << "\n\nNode was not Found :-)\n";
    }

    MyDblLinkedList.InsertAfter(N1 , 500);
    cout << "\n\nAfter Inserting 500 after 2 : \n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);
    cout << "\n\nAfter Inserting 700 at end : \n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MyDblLinkedList.Find(4);
    MyDblLinkedList.DeleteNode(N2);
    cout << "\n\nAfter Deleting 4: \n";
    MyDblLinkedList.PrintList();


    MyDblLinkedList.DeleteFirstNode();
    cout << "\n\nAfter Deleting First Node: \n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteLastNode();
    cout << "\n\nAfter Deleting Last Node: \n";
    MyDblLinkedList.PrintList();

    cout << "\n\nNumber of items in the linked list is : " << MyDblLinkedList.Size() << endl;



    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\n\nYes , List Is Empty. \n\n";
    }
    else
    {
        cout << "\n\nNo , List Is Not Empty. \n\n";
    }

    cout << "\n\nNumber of items in the linked list is : " << MyDblLinkedList.Size() << endl;

    cout << "\n\nAfter Reverse: \n";
    MyDblLinkedList.Reverse();
    MyDblLinkedList.PrintList();

    cout << "\n\nAfter Excuting .Clear()\n";
    MyDblLinkedList.Clear();

    cout << "\n\nNumber of items in the linked list is : " << MyDblLinkedList.Size() << endl << endl;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    MyDblLinkedList.PrintList();

    clsDblLinkedList<int>::Node * N;

    N = MyDblLinkedList.GetNode(2);

    cout << "\n\nNode Value is    : " << N->value;

    cout << "\n\nItem(2) Value is : " << MyDblLinkedList.GetItem(2) <<endl;

    MyDblLinkedList.UpdateItem(2, 500);

    cout << "\n\nAfter Updating Item(2) : \n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAfter(2, 700);

    cout << "\n\nAfter Insert : \n";
    MyDblLinkedList.PrintList();

    system("pause>0");

}


