#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR4.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT41
{
	TEST_CLASS(UT41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 1;
			char s[4] = "!!!";
			ofstream f("file.txt");

			for (int i = 0; i < 2; i++)
			{
				f << s;
			}

			if (Count("file.txt"))
			{
				t = 1;
			}

			Assert::AreEqual(t, 1);
		}
	};
}