#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);

    cout<<"Print Firts index element ->"<<d.at(1)<<endl;
     cout<<"Print front  element ->"<<d.front()<<endl;
      cout<<"Print back  element ->"<<d.back()<<endl;
      cout<<"before erase ->"<<d.size()<<endl;
      d.erase(d.begin(), d.begin()+1);
      cout<<"After erase "<<d.size()<<endl;
    // for(int i:d)
    // {
    //     cout<<i<<" ";

    // }cout<< endl;
    // d.pop_back();
    //  for(int i:d)
    // {
    //     cout<<i<<" ";

    // }cout<< endl;
}
