/*
  Author: CWN221
  Reg No: BSE-01-0032/2024
  Date: 9/19/2024
  Desciption: Using do...while to calculate the sum of numbers
*/

#include <iostream>
using namespace std;

int main() 
{
  int i = 0, sum = 0;
  do {
    cout << i << endl;
    sum += i;
    i++;
  } while (i <= 100);

  cout << "The sum is " << sum << endl;

  return 0;
}