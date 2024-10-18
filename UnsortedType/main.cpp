#include <iostream>
#include "src/UnsortedType.cpp"

using namespace std;

int main()
{
    cout << "Unsorted List" << endl;

    UnsortedType<int>list;

    list.Insert(5);
    list.Insert(7);
    list.Insert(6);
    list.Insert(9);

    list.printList();
    cout<<endl;
    cout<<list.Length();
    cout<<endl;
    list.Insert(1);
    list.printList();
    cout<<endl;
    cout<<list.Search(4,bool found);

    return 0;
}
