#include <cstdlib>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

class Circle
{
int radius;
public:
	void set_radius(int x)
	{
		radius=x;
	}
	int get_radius()
	{
		return radius;
	}


};


int main()
{
//initializations/definition
std::vector<Circle> CircleList= {};
int grenze=std::rand() % 101;
int randvalue=0;
Circle obj_circle[grenze];

//creating objects in list;
for(int i=0;i<=grenze;i++)
{
randvalue=std::rand() % 101;
Circle obj_circle;
obj_circle.set_radius(randvalue);
CircleList.push_back(obj_circle); 
}

//print vector  of Radiuses
std::cout <<"CircleList Radiuses Unsorted:"<<"\n";
    for (Circle n : CircleList) 
    {
        std::cout << n.get_radius() <<" ";
}
std::cout <<"\n";
//sorting
Circle temp;
for(int i=0;i<CircleList.size();i++) {
for(int j=0;j<CircleList.size()-i-1;j++){
if(CircleList[j].get_radius()>CircleList[j+1].get_radius()){
temp=CircleList[j]; 
CircleList[j]=CircleList[j+1];  
CircleList[j+1]=temp;              
}   
}    
} 

//print vector  of Radiuses
std::cout <<"CircleList Radiuses Sorted:"<<"\n";
    for (Circle n : CircleList) 
 {
 	std::cout << n.get_radius() <<" ";
 }
  std::cout <<"\n";
}