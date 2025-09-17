#include <iostream>
//#include <cmath>-use it when u use float or float number
using namespace std;

int main() {
    //Count the number of zeroes in a number
    int num,count0=0;
    cout<<"enter the num:";
    cin>>num;
    if (num==0)
    {
       cout<<"The zeros in the number are 1";
       return 0;
    }
       num=abs(num);
    while (num!=0)
    {
       int digit=num%10;
       if (digit==0)
       {
        count0++;
       }
       num/=10;
       
    }
    cout<<"The zeros in the number are: "<<count0;
    
    return 0;
}