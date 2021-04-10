#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.2/BaseWindow.h"
#include "../OOP Lab3.2/BaseWindow.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ButtonWindow bw(1, 2, 3, 4, 5);
			Assert::AreEqual(bw.getType(), 5);
		}
	};
}
