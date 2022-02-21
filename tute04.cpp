/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>




int main() {
  long long Factorial=1,numerator,denominator;
  int n, r,i=1,comb,sub;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;

  while(i<n)
  {
    Factorial=i*Factorial;
    i++;
  }
  numerator=Factorial;
  sub=n-r;
  Factorial=1;
  i=1;
  while(i<=sub)
  {
    Factorial=i*Factorial;
    i++;
  }
  denominator=Factorial;
  Factorial=1;
  i=1;
  while(i<=r)
  {
    Factorial=i*Factorial;
    i++;
  }
  denominator=(Factorial*denominator);
  comb=numerator/denominator;
  std::cout<<"\nCombination(nCr)="<<comb;
  
  
  

  return 0;
  

  
}
