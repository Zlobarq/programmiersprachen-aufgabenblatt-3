# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
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
bool sort_radius(Circle left,Circle right) { return left.get_radius() < right.get_radius(); }
std::vector<Circle> CircleList= {};


TEST_CASE ("is_sorted","[is_sorted]")
{
REQUIRE(is_sorted(CircleList.begin(),CircleList.end(),sort_radius));	
}

int main(int argc ,char *argv [])
{
//initializations/definition
int grenze=std::rand() % 101;
int randvalue=0;

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
std::sort (CircleList.begin(), CircleList.end(),sort_radius);

//print vector  of Radiuses
std::cout <<"CircleList Radiuses Sorted:"<<"\n";
    for (Circle n : CircleList) 
 {
 	std::cout << n.get_radius() <<" ";
 }
  std::cout <<"\n";
  return Catch::Session().run(argc,argv);
}
