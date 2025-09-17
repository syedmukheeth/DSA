#include <iostream>
using namespace std;

int main() {
    //Reverse a number
    int num, rev=0;
    cout<<"enter the num to reverse:";
    cin>>num;
    while (num!=0)
    {
      int digit=num%10;
      rev=rev*10+digit;
      num=num/10;
    }
    cout<<rev;
    
    return 0;
}