# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

std::vector<int> v1{1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
std::vector<int> v2{9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
std::vector<int> v3{9};

TEST_CASE ("all_of","all_of")
{
REQUIRE(std::all_of(v3.begin(), v3.end(), [](int i){return i==10;})); 
}

int main(int argc ,char *argv [])
{

//print v1
std::cout <<"v1:"<<"\n";
    for (int n : v1) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";
//print v2
std::cout <<"v2:"<<"\n";
    for (int n : v2) 
 {
 	std::cout << n <<" ";
 }
  std::cout <<"\n";
//print v3 before removing the 9
std::cout <<"v3 Anfang:"<<"\n";
    for (int n : v3) 
 {
 	std::cout << n <<" ";
 }
  std::cout <<"\n";
//remove the 9
v3.pop_back();
//print v3 before removing the 9
std::cout <<"v3 ohne 9(nichts):"<<"\n";
    for (int n : v3) 
 {
 	std::cout << n <<" ";
 }
  std::cout <<"\n";
//copy loop
for(int i=0;i<v1.size();i++)
{
int a= v1[i];
int b= v2[i];
int c=a+b;
v3.push_back(c);
}
std::cout <<"v3 Ende:"<<"\n";
    for (int n : v3) 
 {
 	std::cout << n <<" ";
 }



  std::cout <<"\n";
  return Catch::Session().run(argc,argv);  
}
