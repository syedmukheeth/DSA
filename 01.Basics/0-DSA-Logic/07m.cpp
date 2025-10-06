#include <iostream>
using namespace std;
//Find product of all digits (e.g., 123 → 1×2×3 = 6)
int main() {
    int num,mul=1;
    cout<<"enter the num:";
    cin>>num;
    num=abs(num);
    while (num!=0)
    {
        int digit=num%10;
        mul*=digit;
        num/=10;
    }
    cout<<"The product of num digits is "<<mul;
    return 0;
}