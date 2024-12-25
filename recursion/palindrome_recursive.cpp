#include <iostream>

using namespace std;

bool isPalindrome(int i, string s)
{
  if (i >= s.length() / 2)
    return true;

  if (s[i] != s[s.length() - i - 1])
    return false;

  return isPalindrome(i + 1, s);
}

int main()
{
  string s = "ABCDCBA";

  bool ans = isPalindrome(0, s);

  if (ans == true)
    cout << "Palindrome" << endl;
  else
    cout << "Not a Palindrome" << endl;

  return 0;
}
