#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    // stack<int> n;
    // n.push(2);
    // n.push(3);
    // n.push(5);
    
    
    s.push("Mr");
    s.push("Avneesh");
    s.push("Kumar");
cout<<"Top Element ->"<<s.top()<<endl;
s.pop();
cout<<"Top Element ->"<<s.top()<<endl;
cout<<"Size of the stack ->"<<s.size()<<endl;
}