#include <Common.h>
#include <Anvie/Test/UnitTest.h>

/**
 * Signature of all unit tests are like this.
 * They don't take any arguments and return bool
 * and always place TEST_FN before them.
 * */
TEST_FN Bool SampleTest_INSIDE_THIS_UNIT_THAT_WILL_PASS() {
    /* place your test conditions */
    TEST_COND(True, ERR_UNEXPECTED);

    /*
     * Here are some other test macros you can use
     *
     * TEST_LENGTH_EQ(len, val)
     * TEST_LENGTH_NE(len, val)
     * TEST_LENGTH_GE(len, val)
     * TEST_LENGTH_GT(len, val)
     * TEST_LENGTH_LE(len, val)
     * TEST_LENGTH_LT(len, val)
     * TEST_CAPACITY_EQ(len, val)
     * TEST_CAPACITY_NE(len, val)
     * TEST_CAPACITY_GE(len, val)
     * TEST_CAPACITY_GT(len, val)
     * TEST_CAPACITY_LE(len, val)
     * TEST_CAPACITY_LT(len, val)
     * TEST_OBJECT(obj)
     * TEST_DATA_PTR(dp)
     * TEST_UNEXPECTED(cond)
     * TEST_CONTENTS(cond)
     * TEST_EQUALITY(cond)
     * */

    /**
     * This will make sure the code will be executed anyhow
     * */
    DO_BEFORE_EXIT(
        /* place any code here that you want to pass */
        println("This test will pass");
    );
}

TEST_FN Bool SampleTest_INSIDE_THIS_UNIT_THAT_WILL_FAIL() {
    /* place your test conditions */
    TEST_COND(False, ERR_UNEXPECTED);

    /*
     * Notice how this will be executed even if test will fail.
     * You can use this to destroy allocated objects.
     * */
    DO_BEFORE_EXIT(
        println("This test will fail");
    );
}

/*
 * make sure this name is same as the one you imported in UnitTest.c
 * THIS IS A SINGLE UNIT, which has multiple tests
 * */
BEGIN_TESTS(sample_test)
    TEST(SampleTest_INSIDE_THIS_UNIT_THAT_WILL_PASS),
    TEST(SampleTest_INSIDE_THIS_UNIT_THAT_WILL_FAIL)
END_TESTS()
