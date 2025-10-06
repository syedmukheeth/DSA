#include <iostream>
using namespace std;

int main() {
    //Find sum of digits of a number
    int num,sum=0,i;
    cout<<"enter the num: ";
    cin>> num;
    while (num!=0)
    {
      int digit=num%10;
      sum+=digit;
      num=num/10;
    }
    cout<<"the sum is: "<< sum;
    

    return 0;
}