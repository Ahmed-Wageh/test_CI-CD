#include <stdio.h>
#include <stdlib.h>

/* Include Modules */
#include "calc.h"

#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}


/* Include Unity */
#include "unity_fixture.h"
#define MAKE_UNITY_VERBOSE	argc = 2; argv[1] = "-v"

extern void calcTestAddFuncTest1_Plus_1_test(void);
extern void calcTestAddFuncTest1_Plus_2_test(void);


int main(void)
{
	//printf("Test Begins\n");
    UnityBegin("UnityTesting.c");
	RUN_TEST(calcTestAddFuncTest1_Plus_4_test, 20);
	RUN_TEST(calcTestAddFuncTest1_Plus_2_test, 20);
	//printf("Test Ends.\n");
	//getch();
    return (UnityEnd());
}