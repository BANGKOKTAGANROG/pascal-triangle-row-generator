#include <list>
#include <algorithm>

int coefficient(int m, int n)
{
	if (n == 0 or n == m) return 1;
	if (n == 1 or n == m - 1) return m;

	int result = 1; 
	int value = 2;

	std::list<int> n_factorial(n - 1);
	std::generate(n_factorial.begin(), n_factorial.end(), [&value]() { return value++; });

	for (int i = m; i > (m - n); i--)
	{
		result *= i;

		if (!n_factorial.empty())
		{
			std::list<int> divisible;

			for (auto el : n_factorial)
			{
				if (result % el == 0)
				{
					result /= el;
					divisible.emplace_back(el);
				}
			}

			for (auto el : divisible)
			{
				n_factorial.remove(el);
			}
		}
	}

	return result;
}

