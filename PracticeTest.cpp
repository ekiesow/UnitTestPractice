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

// Unit tests for isPalindrome function
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

TEST(PracticeTest, alternate_upper_lower_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("cDaBbAdC");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racedcar");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, long_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("neveroddoreven");
    ASSERT_TRUE(actual);
}

// Unit tests for sortDescenting funtion
TEST(PracticeTest, sort_descending)
{
	Practice obj;
	int first = 5, second = 3, third = 1;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}

TEST(PracticeTest, sort_ascending)
{
	Practice obj;
	int first = 1, second = 3, third = 5;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}


TEST(PracticeTest, sort_descending_second_third_swapped)
{
	Practice obj;
	int first = 5, second = 1, third = 3;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}


TEST(PracticeTest, sort_descending_first_second_swapped)
{
	Practice obj;
	int first = 3, second = 5, third = 1;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}

TEST(PracticeTest, sort_ascending_first_second_swapped)
{
	Practice obj;
	int first = 3, second = 1, third = 5;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}

TEST(PracticeTest, sort_ascending_second_third_swapped)
{
	Practice obj;
	int first = 1, second = 5, third = 3;
	int actual_first = 5, actual_second = 3, actual_third = 1;
	obj.sortDescending(first, second, third);
	ASSERT_EQ(actual_first, first);
	ASSERT_EQ(actual_second, second);
    ASSERT_EQ(actual_third, third);
}