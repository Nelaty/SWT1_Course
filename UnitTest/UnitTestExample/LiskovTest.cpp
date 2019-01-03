#include "UnitTest++/UnitTest++.h"

UNITTEST_SUITE(LiskovTest)
{
	#include "Geometry.h"

	UNITTEST_TEST(RectangleTest)
	{
		Rectangle rect(10.0f, 10.0f);
		UNITTEST_CHECK_EQUAL(rect.getLength(), 10.0f);
		UNITTEST_CHECK_EQUAL(rect.getWidth(), 10.0f);
	}


	UNITTEST_TEST(SquareTest)
	{
		Square square(10.0f);
		UNITTEST_CHECK_EQUAL(square.getLength(), 10.0f);
		UNITTEST_CHECK_EQUAL(square.getWidth(), 10.0f);
	}


	UNITTEST_TEST(SquarePolymorphyTest)
	{
		Rectangle* rect = new Square(10.0f);

		rect->setLength(20.0f);
		UNITTEST_CHECK_EQUAL(rect->getLength(), 20.0f);
		UNITTEST_CHECK_EQUAL(rect->getWidth(), 10.0f);

		delete rect;
	}
}