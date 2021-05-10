//count the sub arrays whose sum is equal to zero or k
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n=7,k=0;
	int arr[n]={4,-2,-1,1,-2,3,-3};
	map<int,int>dic;
	int count=0;
	dic.insert({0,1});
	int prefix=0;
	for(auto i:arr)
	{
	    prefix+=i;
	   
	    if(dic.find(prefix-k)!=dic.end())
	    {
	        count+=dic[prefix-k];
	    }
	    dic[prefix]+=1;
	}
	cout<<count;
	return 0;
}
