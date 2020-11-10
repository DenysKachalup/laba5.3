#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 1;
			int tk = 10;
			int n = 1;
			while (t <= tk)
			{
				double z;
				 z = f(2 * t) + pow(f(t * t + 1), 2);
				
				Assert::AreEqual(z, 12.649);
			}
		}
	};
}
