#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n[5,100];
    cout<<"Print new list"<<endl;
    // for(int i:n)
    // {
    //     cout<<i<< " "<<endl;
    // }
    l.push_back(1);
    l.push_back(2);
    l.push_back(3); // here we can insert only element
     l.push_front(4);// here we  push value form start
      l.push_front(5);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin()); //here Erase fuction perform form the begining  and delete the element form start
    cout<<"After Erase"<<endl;
    for(int i: l)
    {
        cout<<i<<" ";
    }
   cout<<"Size of list"<<l.size()<<endl;
}