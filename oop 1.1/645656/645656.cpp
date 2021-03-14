#include "pch.h"
#include "CppUnitTest.h"
#include "../oop 1.1/Goods.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My645656
{
	TEST_CLASS(OOPunit11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Goods;

			int t = 0;
			Assert::AreEqual(t, 0);
		}
	};
}
