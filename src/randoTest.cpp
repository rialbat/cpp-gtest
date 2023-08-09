/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST_F(RandoTest, mostPopular_FindFrom1991911_One)
{
    Rando rando;
    int actual = rando.mostPopularDigit( 1991911 );
    ASSERT_EQ( 1, actual);
}
TEST_F(RandoTest, mostPopular_FindFrom0_Zero)
{
    Rando rando;
    int actual = rando.mostPopularDigit(0);
    ASSERT_EQ( 0, actual);
}
TEST_F(RandoTest, mostPopular_FindFrom9_Nine)
{
    Rando rando;
    int actual = rando.mostPopularDigit(9);
    ASSERT_EQ( 9, actual);
}
TEST_F(RandoTest, mostPopular_FindFrom31311_One)
{
    Rando rando;
    int actual = rando.mostPopularDigit(31311);
    ASSERT_EQ( 1, actual);
}

TEST_F(RandoTest, mostPopular_FindFrom222_Two)
{
    Rando rando;
    int actual = rando.mostPopularDigit(222);
    ASSERT_EQ( 2, actual);
}

TEST(PolinTests, Polin_CheckFourLettersWord_True)
{
    Rando rando;
    std::string rand_polin = "abba";
    ASSERT_TRUE(rando.isPalindrome(rand_polin));
}

TEST(DivisibleTests, Divisible_Is100DivisibleTo10_True)
{
    Rando rando;
	int first = 100;
	int second = 10;
	ASSERT_TRUE(rando.isDivisibleBy(first, second));
}