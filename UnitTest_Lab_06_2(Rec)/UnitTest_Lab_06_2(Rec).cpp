
#include "pch.h"
#include "CppUnitTest.h"

#define UNIT_TEST
#include "../Lab_06_2_rec/Lab_06_2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62Rec
{
    TEST_CLASS(UnitTest62Rec)
    {
    public:

        TEST_METHOD(TestAverageMinMax)
        {
            int a[6] = { -20, -8, 0, 4, 16, 11 };

            double expected = -2.0;

            double actual = AverageMinMax(
                a, 6, 0, a[0], a[0]
            );

            Assert::AreEqual(expected, actual, 0.0001);
        }
    };
}
