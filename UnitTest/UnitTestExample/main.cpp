#include "UnitTest++/UnitTest++.h"

#include <iostream>

int main(int argc, char** argv)
{
	printf("START UNIT TEST\n\n");
	UnitTest::RunAllTests();
	printf("\n\nEND UNIT TEST\n");

	getchar();
}
