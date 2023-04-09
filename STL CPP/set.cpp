#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
   set<int> s;
   s.insert(5);// time complexity big O of n
   s.insert(4);
   s.insert(6);
   s.insert(7);
   s.insert(1); 
   for(auto i :s)
   {
    cout<<i<<endl;
   }
   cout<<"Now Erase Function is use"<<endl;
   s.erase(s.begin());
    s.erase(s.begin());
//    s.erase(s.end());
   for(auto i: s)
   {
    cout<<i<<endl;
   }
   cout<< endl;
   cout<<"Here count check ";
   cout<<s.count(20)<<endl;

   set<int> ::iterator itr = s.find(5);
   cout<<"value present itr " <<*itr<<endl;
}