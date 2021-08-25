#include "add.h"

namespace add_ns
{
	int result = 0;

	int add(int n1, int n2)
	{
		result = n1 + n2;
		return result;
	}

	int add_to_result(int n)
	{
		result += n;
		return result;
	}

	void reset()
	{
		result = 0;
	}
}
