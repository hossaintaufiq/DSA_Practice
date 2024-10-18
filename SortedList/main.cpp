#include <bits/stdc++.h>
//#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;

int main()
{

    UnsortedType<int> list;
    list.Insert(1);
    list.Insert(2);
    list.Insert(3);
    list.Insert(4);
    list.Insert(5);

    list.Delete(2);

    list.printList();

    return 0;
}
