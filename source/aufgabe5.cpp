# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <algorithm>
//initialize globally
std::vector<unsigned int> vector= {};
//function
bool is_multiple_of_three(int i){
	if (i%3 ==0)
	{
		return true;
	}
	return false;
}
bool isnt_multiple_of_three(int i){
	if (i%3 !=0)
	{
		return true;
	}
	return false;
}


TEST_CASE ("filter alle vielfache von drei","[erase]")
{
REQUIRE(std::all_of(vector.begin(),vector.end(),is_multiple_of_three));
}

int main(int argc ,char *argv [])
{
//Working around in main
//initialization/defition
int grenze=std::rand() % 101;
int randvalue=0;
//vector Creating Loop
for (int i=0;i<=grenze;i++)
{
randvalue=std::rand() % 101;
vector.push_back(randvalue); 
}
//print vector 
std::cout <<"Vector:"<<"\n";
    for (int n : vector) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";
//erase
vector.erase(std::remove_if(vector.begin(),vector.end(),isnt_multiple_of_three),vector.end());
//print vector again
std::cout <<"Print vector of durch 3 teilbaren:"<<"\n";
    for (int n : vector) 
    {
        std::cout << n <<" ";
}
std::cout <<"\n";


return Catch::Session().run(argc,argv);
}




