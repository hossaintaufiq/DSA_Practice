#include <iostream>
#include "SortedType.h"
#include "SortedType.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    /*SortedType<int>list;
    cout<<list.Length()<<endl;
    list.Insert(5);
    list.Insert(7);
    list.Insert(4);
    list.Insert(2);
    list.Insert(1);
    list.PrintList();
    cout<<endl;
    bool found;
    list.Search(6,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item not found" <<endl;
    list.Search(5,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item not found" <<endl;

    if(list.IsFull())cout <<"List is full"<<endl;
    else cout<<"List is not full"<<endl;
    list.Delete(1);
    list.PrintList();
    cout<<endl;
    if(list.IsFull())cout <<"List is full"<<endl;
    else cout<<"List is not full"<<endl;
    list.Delete(4);
    list.PrintList();
    cout<<endl;*/


    // timestamp

    SortedType<timeStamp> list;

    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52, 02, 20);

    list.Insert(t1);
    list.Insert(t2);
    list.Insert(t3);
    list.Insert(t4);
    list.Insert(t5);

    timeStamp t;
    /*for(int i=0; i<list.Length(); i++)
    {
        list.GetNext(t);
        t.print();
        cout<<endl;
    }*/



    list.Delete(t4);
    list.Reset();
    for(int i=0; i<list.Length(); i++)
    {
        list.GetNext(t);
        t.print();
        cout<<endl;
    }



    return 0;
}
