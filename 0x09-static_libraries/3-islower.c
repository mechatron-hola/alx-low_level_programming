#include "main.h"

int _islower(int c)
{
  /*
   * Check if the character is within the range of lowercase letters (a-z)
   * using a bitwise AND operation with 0x20 (32 in decimal).
   * Lowercase letters have their 6th bit set to 1, while uppercase letters
   * have it set to 0.
   */
return (c >= 'a' && c <= 'z');
}

