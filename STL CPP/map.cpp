#include<string>
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
//
int main()
{
map <int,vector<int>> n;
vector<int> m;

m.push_back(2); m.push_back(5);m.push_back(7);
n.push_back(<int,vector<int>>(1,m));

m.erase(m.begin(),m.end());
if (!m.empty()){cout<<"error:";
m.push_back(2); m.push_back(5);m.push_back(9);
n.push_back(<int,vector<int>>(2,m));

return 1;

}