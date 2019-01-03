#include "UnitTest++/UnitTest++.h"

int func(int n)
{
	if(n > -42 && n <= 13)
	{
		if(n > -20)
		{
			return 2 * n;
		}
		else
		{
			return -2 * n;
		}
	}

	if(n > 13 && n < 100)
	{
		return n;
	}

	return 0;
}