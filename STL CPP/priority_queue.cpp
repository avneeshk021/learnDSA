#include<iostream>
#include<queue>
#include<algorithm>// this library is used for make_heap, Push_heap sort_heap
#include<vector>
using namespace std;
int main()
{
    priority_queue<int> maxi;  //Max Heap
    priority_queue<int ,vector<int> , greater<int> >min;
    int arr[]={10,4,5,9,13}; //here make a array
    vector<int> v(arr,arr+5); //double of array

    make_heap(v.begin(),v.end()); // Here we make a heap from begin
    cout<<"Intial max Heap "<<v.front()<<endl;
     pop_heap(v.begin(),v.end());
     v.pop_back();
    cout<<" max Heap After pop "<<v.front()<<endl;
     v.push_back(99);
     push_heap(v.begin(),v.end());
     cout<<"Max Heap after Push :"<<v.front()<<endl;

    sort_heap(v.begin(),v.end());
    cout<<"Final Sorted Array "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<" "<<v[i];
        cout<<endl;
    }
cout<<"Maxi Heap start "<< endl;
maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(5);
int n=maxi.size();// kyuki maxi.size chnge ho rha hai  aur ham chahate hai ki 4 times run ho
for(int i=0; i<n; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
} cout<<endl;

cout<<"Min Heap start "<<endl;
min.push(20);
min.push(11);
min.push(12);
min.push(13);
int m= min.size();
for(int i=0; i<m; i++)
{
    cout<<min.top()<<" ";
    min.pop();
}cout<<endl;

return 0;
}