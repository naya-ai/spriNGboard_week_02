#include <iostream>
using namespace std;

void fizzBuzz (int n)
{
  cout << "Please enter a number that will be divisible by 3, 5, or both: "; 
  cin >> n;

  if ((n%3==0) && (n%5==0)){
    cout << "FizzBuzz.";
  } else if ((n%3)==0){ //if number is divisible by 3
    cout << "Fizz."; 
  } else if ((n%5)==0){ // if number is divisible by 5
    cout<<, "Buzz.";
  } else 
    cout << "N."; //if the number is no divisible by either
}

int main()
{
  int n;
  fizzBuzz(n);
  return 0;
}
