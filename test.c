#include "unity.h"
#include "calc.c"
#include <limits.h>

void setUp(void) {}
void tearDown(void) {}

void test_add(void)
{
	TEST_ASSERT_EQUAL(4, add(2, 2));
        TEST_ASSERT_EQUAL(INT_MAX, add(INT_MAX, 1));
}

void test_sub(void)
{
        TEST_ASSERT_EQUAL(0, sub(2, 2));
        TEST_ASSERT_EQUAL(-50, sub(50, 100)); 
}

void test_mul(void)
{
        TEST_ASSERT_EQUAL(9, mul(3, 3));
        TEST_ASSERT_EQUAL(-25, mul(-5, 5));

}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_add);
        RUN_TEST(test_sub);
        RUN_TEST(test_mul);
	return UNITY_END();
}
