#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 7;
			int a[7] = {-1,-2,-3,-4,-5,-6,-7};
			int max = 0;
			int add = 0;
			for (int i = 0; i < n; i++)
			{
				add += a[i];
				if (add > max)
				{
					max = add;
				}
				else if (add < 0)
				{
					add = 0;
				}
			}
			int right = 0;
			Assert::AreEqual(right, max);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 7;
			int a[7] = { 1,1,1,1,1,1,1 };
			int max = 0;
			int add = 0;
			for (int i = 0; i < n; i++)
			{
				add += a[i];
				if (add > max)
				{
					max = add;
				}
				else if (add < 0)
				{
					add = 0;
				}
			}
			int right = 7;
			Assert::AreEqual(right, max);
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 7;
			int a[7] = {1,0,-1,-2,-3,-4,-5};
			int max = 0;
			int add = 0;
			for (int i = 0; i < n; i++)
			{
				add += a[i];
				if (add > max)
				{
					max = add;
				}
				else if (add < 0)
				{
					add = 0;
				}
			}
			int right = 1;
			Assert::AreEqual(right, max);
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 7;
			int a[7] = {-5,-4,-3,-2,-1,0,1};
			int max = 0;
			int add = 0;
			for (int i = 0; i < n; i++)
			{
				add += a[i];
				if (add > max)
				{
					max = add;
				}
				else if (add < 0)
				{
					add = 0;
				}
			}
			int right = 1;
			Assert::AreEqual(right, max);
		}
		TEST_METHOD(TestMethod5)
		{
			int n = 6;
			int a[6] = {-2,11,-4,13,-5,-2};
			int max = 0;
			int add = 0;
			for (int i = 0; i < n; i++)
			{
				add += a[i];
				if (add > max)
				{
					max = add;
				}
				else if (add < 0)
				{
					add = 0;
				}
			}
			int right = 20;
			Assert::AreEqual(right, max);
		}
	};
}
