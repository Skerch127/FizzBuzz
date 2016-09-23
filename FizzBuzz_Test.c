/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "FizzBuzz_Test.check" instead.
 */

#include <check.h>

#line 1 "FizzBuzz_Test.check"
#include "FizzBuzz.h"

START_TEST(FizzBuzz_Test)
{
#line 4
	fail_unless(fizzbuzz(1) == 1, "fizzbuzz is broke yo");
	fail_unless(fizzbuzz(1) == 2, "fizzbuzz is broke yo");
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, FizzBuzz_Test);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}