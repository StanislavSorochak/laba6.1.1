#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test611
{
	TEST_CLASS(Test611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[20]{ -5, 8, 2, 28,4, -17, -19, 29, 19, 28, 2, 16, 13, 34, -4, -11, 4, -5, 27, 3 };
			c = Sum (a,20);
			Assert::AreEqual(c, 182);

		}
	};
}
