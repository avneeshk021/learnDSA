#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Avii");
    q.push("Kumar");
    cout<<" before Size of queue  "<<q.size()<<endl;
    cout<<"Top element -> "<<q.front()<<endl;
    q.pop();
      cout<<"Top element -> "<<q.front()<<endl;
      cout<<"Size of queue  "<<q.size()<<endl;
    
}
