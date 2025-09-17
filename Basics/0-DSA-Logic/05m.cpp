#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Check if a number is Armstrong (3-digit only)
    int num;
    double sumOfCubes= 0;//use double for sum of cubes of digits bcz pow gives double value
    cout<<"enter the num:";
    cin>>num;
    int temp=num;
    while (num!=0)
    {
      int digit=num%10;
       //sumOfCubes += digit * digit * digit;
      sumOfCubes += pow(digit, 3);
      num=num/10;
    }
    if (temp == sumOfCubes)
    {
        cout << temp << " is an Armstrong number";
    }
    else
        cout << temp << " is not an Armstrong number";
    return 0;
}