#include <iostream>
#include "UnsortedType.cpp"


using namespace std;

int main()
{
    //Part 1

    /*
    UnsortedType<int>list;

    list.Insert(5);
    list.Insert(7);
    list.Insert(6);
    list.Insert(9);
    list.PrintList();
    //cout<<endl;
    cout<<list.Length();
    cout<<endl;
    list.Insert(1);
    list.PrintList();
    //cout<<endl;
    // cout<<list.Length();
    // cout<<endl;

    // int num;
    // for(int i=0;i<list.Length();i++){
    //    list.GetNext(num);
    //    cout<<num<<" ";
    // }
    // cout<<endl;
    bool found ;
    list.Search(4,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item is not found"<<endl;
    list.Search(5,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item is not found"<<endl;

    list.Search(9,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item is not found"<<endl;

    list.Search(10,found);
    if(found){
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item is not found"<<endl;

    list.Delete(5);
    list.Reset();
    list.PrintList();
    list.Delete(1);
    list.Reset();
    list.PrintList();
    list.Delete(6);
    list.Reset();
    list.PrintList();

    */

    //part 2
    UnsortedType<int>list1;
    list1.Insert(10);
    list1.Insert(1);
    list1.Insert(5);
    list1.Insert(6);
    list1.Insert(10);
    list1.Insert(14);
    list1.Insert(20);
    list1.Insert(25);
    list1.Insert(31);
    list1.Insert(38);
    list1.Insert(40);
    //list1.PrintList();


    UnsortedType<int>list2;
    list2.Insert(12);
    list2.Insert(2);
    list2.Insert(4);
    list2.Insert(7);
    list2.Insert(9);
    list2.Insert(16);
    list2.Insert(19);
    list2.Insert(23);
    list2.Insert(24);
    list2.Insert(32);
    list2.Insert(35);
    list2.Insert(36);
    list2.Insert(42);


   // list1.PrintList();
   // list2.PrintList();

    int num ,length;
    length=list2.Length();

    list2.Reset();
    for(int i=0; i<length; i++)
    {

        list2.GetNext(num);
        list1.Insert(num);
        list2.Delete(num);
    }
    list1.Reset();
    // list1.PrintList();






// sorting
     int max;
     bool found;
     while(list1.Length()!=0)
     {
         list1.Reset();
         list1.GetNext(num);
         max=num;
         for(int i=0; i<list1.Length(); i++)
         {
             list1.GetNext(num);
             if(num>max)
                 max=num;
         }
         list1.Delete(max);
         list2.Search(max,found);
         if(!found)list2.Insert(max);
     }

     list2.PrintList();



    return 0;
}
