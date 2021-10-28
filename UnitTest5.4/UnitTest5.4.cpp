#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1, i = 0, K = 16;
			int n;
			n = (1. * i * N) / ((1. * i * i) + (1. * N * N));
			Assert::AreEqual(n, 0);
		}
	};
}