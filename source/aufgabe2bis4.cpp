#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
int main()
{
//Initialization

//List und vector	
std::list<unsigned int> list= {};
std::vector<unsigned int> vector= {};
//Variables
int grenze=std::rand() % 101;
int randvalue=0;
//int haufigkeit[0]=0;
//List Creating Loop
for (int i=0;i<=grenze;i++)
{
randvalue=std::rand() % 101;
list.push_back(randvalue); 
}
std::copy(std::begin(list),std::end(list),std::back_inserter(vector));



//3.2
std::cout <<"Aufgabe3.2\n";
//List Printing Loop
std::cout <<"List:"<<"\n";
    for (int n : list) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";
//Vector Printing Loop
std::cout <<"Vector:"<<"\n";
    for (int n : vector) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";


//3.3
std::cout <<"\nAufgabe3.3\n";

//Inizialization
std::set<unsigned int> set(std::begin(list),std::end(list));
std::cout <<"Uniques Size:" << set.size() <<"\n";

std::cout <<"Set:"<<"\n";
    for (int n : set) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";
std::cout <<"Outside set:"<<"\n";
 for (int i=0;i<=100;i++) 
    {
    	if (set.count(i)==0)
    	{
    	std::cout << i <<" ";	
    	}
	}

std::cout <<"\n";
//3.4
std::cout <<"\nAufgabe3.4\n";
std:map<unsigned int,unsigned int> map;
for(std::set<unsigned int>::iterator it=set.begin(); it!=set.end(); ++it)
{
    int a = *it;
    int b=0;
    for (int i : list)
    {
    	if (i==a)
    	{
    	b+=1;
    	}
    }
    map.insert(std::make_pair(a,b));
}


	cout<<"Print Map: \n";
   for (auto n : map) {
        std::cout << "var[" << n.first <<"]";
        std::cout << "haufigkeit[" << n.second <<"] ";
    }
    std::cout<<"\n ";
return 0;
};