#include <iostream>       
#include <queue>  
using namespace std;        // std::queue

int main ()
{
  queue<int> foo,bar;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  foo.swap(bar);

  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';

 std::queue<std::string> myqueue;

  myqueue.emplace ("First sentence");
  myqueue.emplace ("Second sentence");

  cout << "myqueue contains:"<<endl;
  while (!myqueue.empty())
  {
    cout << myqueue.front() << '\n';
    myqueue.pop();
  return 0;
}