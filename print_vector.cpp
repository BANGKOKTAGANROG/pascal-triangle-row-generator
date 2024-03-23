#include <iostream>
#include <vector>

void print_vector(std::vector<unsigned long long>& vec)
{
	for (auto el : vec)
	{
		std::cout << el << " ";
	}
}