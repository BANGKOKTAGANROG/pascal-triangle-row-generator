#include <iostream>
#include <vector>

void print_vector(std::vector<int>& vec)
{
	for (auto el : vec)
	{
		std::cout << el << " ";
	}
}