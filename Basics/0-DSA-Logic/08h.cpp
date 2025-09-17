#include <iostream>
using namespace std;
//Check if a number is a Strong number
int factorial(int n){
  int fact=1;
  for ( int i = 2; i <= n; ++i)
  {
    fact*=i;
  }
  return fact;
}
int main() {
    int num,sum=0;
    cout<<"Enter the num to check: ";
    cin>>num;
    int temp=num;
    while (temp!=0)
    {
      int digit=temp%10;
      sum+=factorial(digit);
      temp/=10;
    }
    if (num==sum)
    {
      cout<<"The num is strong num";
    }
    else
      cout<<"The num is not strong num";
    
    return 0;
}