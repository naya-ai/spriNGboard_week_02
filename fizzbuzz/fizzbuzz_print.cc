#include <iostream>
using namespace std;

void fizzBuzz (int n)
{
  for (int n=1; n<=50; ++n) {

    if ((n%3==0) && (n%5==0)){
      cout << "FizzBuzz, \t";
    }  else if ((n%3)==0){
      cout << "Fizz, \t";
    }  else if ((n%5) ==0){
      cout << "Buzz, \t";
    } else
      cout << n << ",\t";
  }
   
}
int main ()
{
  int n = 50;
  fizzBuzz(n);
  return 0;
}
