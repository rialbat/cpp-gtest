//Author: Kevin Buffardi
#include "rando.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

/**
 * Determines if either first or second parameter is evenly 
 * divisible by the other.
**/
bool Rando::isDivisibleBy(int first, int second)
{
  if (first % second == 0)
    return true;
  return false;
}

/**
 * Determines, without case sensitivity, whether the parameter is
 * if read either backwards (right-to-left) or forwards (left-to-right)
**/
bool Rando::isPalindrome(std::string eval)
{
  std::string l_eval(eval.length(), NULL);
  std::transform(eval.begin(), eval.end(), l_eval.begin(), [](unsigned char c){ return std::tolower(c); });

  if (l_eval == std::string(eval.rbegin(), eval.rend()))
    return true;

  return false;
}

/**
 * Returns the digit {0...9} that occurs the most often within the parameter
 * or returns -1 if there is no single digit that occurs more often than all
 * the others
**/
int Rando::mostPopularDigit(unsigned int num)
{
    int most = 0;
    int popular = -1;
    int current;
    std::vector <int> digitCount(10,0);

    while( num > 9 )
    {
      current = num%10;
      digitCount[current]++;
      num = num/10;
    }

    digitCount[num]++;

    for(int i=0; i<digitCount.size(); i++)
    {
      if( digitCount[i] > most )
      {
        most = digitCount[i];
        popular = i;
      }
    }

    return popular;
}













