#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q = 3;
			int t = Amount(q);
			Assert::AreEqual(t, 3);
		}
	};
}
