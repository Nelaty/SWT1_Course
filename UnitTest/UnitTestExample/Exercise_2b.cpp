#include "UnitTest++/UnitTest++.h"

int f(int ip)
{
	if(ip > 0)
	{
		return -1;
	}
	if(ip > 100)
	{
		return -1;
	}

	int r = -1;
	if(ip >= 0 && ip < 20)
	{
		r = 5;
		return 5;
	}
	if(ip < 40 || ip < 30)
	{
		r = 4;
		return 4;
	}
	if(ip <= 60)
	{
		r = 3;
		return 3;
	}
	if(ip <= 79)
	{
		r = 2;
		return 2;
	}
	if(ip >= 80 && ip <= 100)
	{
		r = 1;
		return 1;
	}
	return r;
}

UNITTEST_SUITE(structured_test_points)
{
	UNITTEST_TEST(gAeq1)
	{
		UNITTEST_CHECK_EQUAL(1, f(90));
		
		UNITTEST_CHECK_EQUAL(1, f(80));
		UNITTEST_CHECK_EQUAL(1, f(81));
		UNITTEST_CHECK_EQUAL(1, f(99));
		UNITTEST_CHECK_EQUAL(1, f(100));
	}

	UNITTEST_TEST(gAeq2)
	{
		UNITTEST_CHECK_EQUAL(2, f(70));
							  
		UNITTEST_CHECK_EQUAL(2, f(60));
		UNITTEST_CHECK_EQUAL(2, f(61));
		UNITTEST_CHECK_EQUAL(2, f(78));
		UNITTEST_CHECK_EQUAL(2, f(79));
	}

	UNITTEST_TEST(gAeq3)
	{
		UNITTEST_CHECK_EQUAL(3, f(50));
							 
		UNITTEST_CHECK_EQUAL(3, f(40));
		UNITTEST_CHECK_EQUAL(3, f(41));
		UNITTEST_CHECK_EQUAL(3, f(58));
		UNITTEST_CHECK_EQUAL(3, f(59));
	}

	UNITTEST_TEST(gAeq4)
	{
		UNITTEST_CHECK_EQUAL(4, f(30));
							 
		UNITTEST_CHECK_EQUAL(4, f(20));
		UNITTEST_CHECK_EQUAL(4, f(21));
		UNITTEST_CHECK_EQUAL(4, f(38));
		UNITTEST_CHECK_EQUAL(4, f(39));

	}

	UNITTEST_TEST(gAeq5)
	{
		UNITTEST_CHECK_EQUAL(5, f(10));
							 
		UNITTEST_CHECK_EQUAL(5, f(0));
		UNITTEST_CHECK_EQUAL(5, f(1));
		UNITTEST_CHECK_EQUAL(5, f(18));
		UNITTEST_CHECK_EQUAL(5, f(19));
	}

	UNITTEST_TEST(uAeq1)
	{
		UNITTEST_CHECK_EQUAL(-1, f(-1000));
		UNITTEST_CHECK_EQUAL(-1, f(-2));
		UNITTEST_CHECK_EQUAL(-1, f(-1));

		UNITTEST_CHECK_EQUAL(-1, f(INT_MIN - 1));
		UNITTEST_CHECK_EQUAL(-1, f(INT_MIN));
		UNITTEST_CHECK_EQUAL(-1, f(INT_MIN + 1));
	}

	UNITTEST_TEST(uAeq2)
	{
		UNITTEST_CHECK_EQUAL(-1, f(1252));
		UNITTEST_CHECK_EQUAL(-1, f(101));
		UNITTEST_CHECK_EQUAL(-1, f(102));
							 
		UNITTEST_CHECK_EQUAL(-1, f(INT_MAX - 1));
		UNITTEST_CHECK_EQUAL(-1, f(INT_MAX));
		UNITTEST_CHECK_EQUAL(-1, f(INT_MAX + 1));
	}

	UNITTEST_TEST(uAeq3)
	{
		// Macht bei C++ wenig Sinn, da solche Parameter zu 
		// Compiler-Fehlern führt.
	}
}