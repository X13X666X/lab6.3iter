#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // ���� ��� ������ ����� �����
        TEST_METHOD(TestCountOddElementsForIntArray)
        {
            const int n = 5;
            int a[n] = { 1, 2, 3, 4, 5 };
            int expected = 3; // ������: 1, 3, 5

            int actual = CountOddElements(a, n);

            Assert::AreEqual(expected, actual);
        }

        // ���� ��� �������� ������� � ������� double
        TEST_METHOD(TestCountOddElementsForDoubleArray)
        {
            const int n = 5;
            double a[n] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
            int expected = 3; // ������ �������: 1, 3, 5

            int actual = CountOddElements(a, n);

            Assert::AreEqual(expected, actual);
        }

        // ���� ��� ���������� ������
        TEST_METHOD(TestCountOddElementsWithEmptyArray)
        {
            const int n = 0;
            int* a = nullptr;
            int expected = 0;

            int actual = CountOddElements(a, n);

            Assert::AreEqual(expected, actual);
        }

        // ���� ��� �������� ������
        TEST_METHOD(TestCountOddElementsForLargeArray)
        {
            const int n = 100;
            int a[n];
            for (int i = 0; i < n; ++i) {
                a[i] = i + 1; // ����� �� 1 �� 100
            }
            int expected = 50; // ʳ������ �������� ����� �� 1 �� 100

            int actual = CountOddElements(a, n);

            Assert::AreEqual(expected, actual);
        }
    };
}
