#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>

template <typename Container, typename T>
Container filter (Container const& c,T praed)
{
	Container c2 (c.size());
	std::copy_if (c.begin(), c.end(), c2.begin(),
		praed);
}
bool is_even ( int n ) { return n % 2 == 0; }
std::vector<int> v{1 ,2 ,3 ,4 ,5 ,6};
std::vector<int> alleven = filter (v , is_even );


TEST_CASE ("all even","[is_even]")
{
REQUIRE(std::all_of(alleven.begin(),alleven.end(),is_even));
}

int main(int argc ,char *argv [])
{



return Catch::Session().run(argc,argv);
}




