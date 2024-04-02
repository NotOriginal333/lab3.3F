#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3F/Date.h"
#include "../lab3.3F/Date.cpp"
#include "../lab3.3F/GoodsO.h"
#include "../lab3.3F/GoodsO.cpp"
#include "../lab3.3F/GoodsC.h"
#include "../lab3.3F/GoodsC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Date today(2024, 3, 1);
			Date dateOfBirth("2000.12.31");
			int test = today.getYear();
			Assert::AreEqual(2024, test);
			test = dateOfBirth.getDay();
			Assert::AreEqual(31, test);
		}
	};
}
