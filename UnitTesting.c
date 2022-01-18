#include <stdio.h>
#include <string.h>
/* Include tested module header file */
#define EXPOSE_LED_INTERNALS

/* Include Unity */
#include "unity_fixture.h"

#include "calc.h"

void calcTestAddFuncTest1_Plus_1_test(void)
{
	int expected_result = 2;
	
	TEST_ASSERT_EQUAL(expected_result, addNumber(1, 1));
}

void calcTestAddFuncTest1_Plus_2_test(void)
{
	int expected_result = 3;
	
	TEST_ASSERT_EQUAL(expected_result, addNumber(1, 2));
}