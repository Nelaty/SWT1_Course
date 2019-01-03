#include "UnitTest++/UnitTest++.h"

UNITTEST_SUITE(ExampleTests)
{
	UNITTEST_TEST(successfullTest)
	{
		UNITTEST_CHECK_EQUAL(1, 1);
	}
	
	UNITTEST_TEST(unsuccessfullTest)
	{
		UNITTEST_CHECK_EQUAL(1, 10);
	}

	UNITTEST_TEST(timeCriticalTest)
	{
		UNITTEST_TIME_CONSTRAINT(1);
		int sum = 0;
	
		for(int i = 0; i < 1000000; ++i)
		{
			sum += sqrt(i);
		}
	}
}