#include <iostream>
#include <vector>

#include "coefficient.h"
#include "print_vector.h"

int main()
{
	int n;
	std::cout << "Enter Pascal Triangle row number: ";
	std::cin >> n;

	std::vector<unsigned long long> row;

	for (int i = 0; i <= n; i++)
	{
		row.push_back(coefficient(n, i));
	}

	print_vector(row);
	std::cout << std::endl;

	return 0;
}