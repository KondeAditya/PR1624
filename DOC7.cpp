#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string,int> pMap;

	pMap.insert(pair<string,int>("Maharashtra",7500));
	pMap.insert(pair<string,int>("Tamil-Nadu",5430));
	pMap.insert(pair<string,int>("Rajasthan",630));
	pMap.insert(pair<string,int>("Gujarat",1230));
	pMap.insert(pair<string,int>("Goa",800));
	pMap.insert(pair<string,int>("Kerala",3230));

	cout<<"Size of pMap is: "<<pMap.size()<<endl;

	map<string,int>::iterator it;
	for(it=pMap.begin(); it!=pMap.end(); ++it)
		cout<<it->first<<": "<<it->second<<" million"<<endl;

	char ch;
	do{
	string state;
	cout<<"Enter name of state whose population you want to find: "<<endl;
	cin>>state;

	it=pMap.find(state);
	if(it!=pMap.end())
		{cout<<"\nFound!!\n"<<state<<"'s population is: "<<it->second<<" million"<<endl;}
	else{
		cout<<"Key not found"<<endl;}
	cout<<"Do you want to continue:";
	cin>>ch;
	}while(ch=='y'|| ch=='Y');

	return 0;
}



