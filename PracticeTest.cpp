/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simplest_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_upper_lower_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abBA");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, palindrome_with_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("never odd or even");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racedcar");
    ASSERT_FALSE(actual);
}