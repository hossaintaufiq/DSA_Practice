#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "Student.h"
#include "Student.cpp"
using namespace std;

int main()
{
    UnsortedType<int> list;
    list.Insert(5);
    list.Insert(7);
    list.Insert(6);
    list.Insert(9);
    list.PrintList();
    cout<<endl;
    cout<<list.Length()<<endl;
    list.Insert(1);
    list.PrintList();
    cout<<endl;
    bool found;
    list.Search(4,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item Not Found"<<endl;
    list.Search(5,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item Not Found"<<endl;
    list.Search(9,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item Not Found"<<endl;
    list.Search(10,found);
    if(found)
    {
        cout<<"Item is found"<<endl;
    }
    else cout<<"Item Not Found"<<endl;

    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else cout<<"List is not full"<<endl;
    list.Delete(5);
    if(list.IsFull()){
        cout<<"List is full"<<endl;
    }
    else cout<<"List is not full"<<endl;
    list.PrintList();
    cout<<endl;
    list.Delete(1);
    list.PrintList();
    cout<<endl;
    list.Delete(6);
    list.PrintList();
    cout<<endl;


    // student code 

    // UnsortedType<Student>list;
    // Student st1(15234, "Jon", 2.6);
    // Student st2(13732, "Tyrion", 3.9);
    // Student st3(13569," Sandor", 1.2);
    // Student st4(15467, "Ramsey", 3.8);
    // Student st5(16285, "Arya", 3.1);
    
    // list.Insert(st1);
    // list.Insert(st2);
    // list.Insert(st3);
    // list.Insert(st4);
    // list.Insert(st5);
  

    // Student st;
    // // for(int i=0;i<list.Length();i++){
    // //     list.GetNext(st);
    // //     st.print();
    // //     cout<<endl;
    // // }
    // // cout<<endl;
    // // cout<<endl;
    // // cout<<endl;
    // // list.Reset();

    // // Student st;
    // for(int i=0;i<list.Length();i++){
        
    //     list.GetNext(st);
    //     if(st.getID()== 15234){
    //         list.Delete(st);
    //     }
        
    // }
    // list.Reset();

    //  for(int i=0;i<list.Length();i++){
    //     list.GetNext(st);
    //     st.print();
    //     cout<<endl;
    // }

    // list.Reset();

    //  for(int i=0;i<list.Length();i++){
    //     list.GetNext(st);
    //     if(st.getID()==13569){
    //         cout<<"Item is found"<<endl;
    //         st.print();
    //         cout<<endl;
    //     }
       
    // }









    return 0;
}
