#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFunctionK)
        {
            double x = 2.0, y = 3.0;
            double expected = (x / (1 + sin(y))) + (y / (1 + x * x));
            double actual = k(x, y);
            Assert::AreEqual(expected, actual, 0.0001);
        }

        TEST_METHOD(TestMainExpression)
        {
            double p = 1.0, q = 2.0;
            double k1 = k(1 + p * q * q, p * p);
            double k2 = k(p * q + q * q, p);
            double expected = (k1 + k2) / (1 + k(p * q + q * q, p));
            double actual = (k(1 + p * q * q, p * p) + k(p * q + q * q, p)) / (1 + k(p * q + q * q, p));
            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
