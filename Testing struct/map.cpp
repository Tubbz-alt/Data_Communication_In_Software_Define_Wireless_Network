#include<iostream>
#include<unordered_map>
#include<vector>
#include<map>
using namespace std;

int main()
{
	
	map<int ,map<int,int>> m;
	//vector<subj> s;
	
	m[0].push_back(subj(2,5,3));
	m[2].push_back(subj(5,2,4));
	m[5].push_back(subj(7,1,3));
	
	for(auto x:m)
	{	auto v=(x.second);
		cout<<x.first<<"  "<<v[0].nextHope<<"  "<<v[0].relay<<endl;
	}
	
	

}
