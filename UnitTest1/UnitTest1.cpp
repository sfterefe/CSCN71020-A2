#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C"{
#include "../BCSRec/main.c"
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPerimeter)
		{
			int x = 6, y = 7;
			int perimeter = getPerimeter(&x, &y);
			Assert::AreEqual(26, perimeter);
		}
		TEST_METHOD(TestArea)
		{
			int x = 6, y = 7;
			int area = getArea(&x, &y);
			Assert::AreEqual(42, area);
		}
		TEST_METHOD(TestsetLength1)
		{
			int input = 49;
			int length = 1;
			setLength(input, &length);
			Assert::AreEqual(49, length);
		}
		TEST_METHOD(TestsetLength2)
		{
			int input = 99;
			int length = 1;
			setLength(input, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(TestsetLength3)
		{
			int input = -99;
			int length = 1;
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(TestsetWidth1)
		{
			int input = 101;
			int width = 1;
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(TestsetWidth2)
		{
			int input = 1;
			int width = 4;
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
		TEST_METHOD(TestsetWidth3)
		{
			int input = 45;
			int width = 54;
			setWidth(input, &width);
			Assert::AreEqual(45, width);
		}

	};
}
