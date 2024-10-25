#include "pch.h"
#include "CppUnitTest.h"
#include "../LabAP_5.1/Lab_05_1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod_g)
		{
			// Тест функції g
			Assert::AreEqual(7.0, g(1, 2), 1e-6);
			Assert::AreEqual(0.0, g(0, 0), 1e-6);
			Assert::AreEqual(12.0, g(2, 2), 1e-6);
		}

		TEST_METHOD(TestMethod_calculateResult)
		{
			// Тест функції calculateResult для наборів значень
			double result1 = calculateResult(1.0, 2.0);
			double expected1 = (g(1, 1) + pow(1 + pow(g(2, 1), 2), 2)) / (1 + pow(g(3, 1), 3));
			Assert::AreEqual(expected1, result1, 1e-6);

			double result2 = calculateResult(0.0, 0.0);
			double expected2 = (g(1, 0) + pow(1 + pow(g(0, 1), 2), 2)) / (1 + pow(g(0, 1), 3));
			Assert::AreEqual(expected2, result2, 1e-6);
		}
	};
}
