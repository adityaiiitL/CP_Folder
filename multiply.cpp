#include "multiply.h"

namespace multiply_ns
{
	long result = 1;

	long multiply(int n1, int n2)
	{
		result = n1 * n2;
		return result;
	}

	long multiply_with_result(int n)
	{
		result *= n;
		return result;
	}

	void reset()
	{
		result = 1;
	}
}
