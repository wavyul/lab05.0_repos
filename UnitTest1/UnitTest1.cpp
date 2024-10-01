#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.0/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double result = f(2, 2, 2);
            Assert::AreEqual(result, 1.3, 0.1);
        }
    };
}
