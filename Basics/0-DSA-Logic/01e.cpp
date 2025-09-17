#include <iostream>
using namespace std;

int main() {
    //Count number of digits in a number
    int num, count = 0;
    cout << "Enter a number: ";
    cin>> num;
    while (num!=0)
    {
       num=num/10;
       /*i made a mistake here i used % instead of /,
        % gives last digit , / removes last digit */
       count++; 
    }
    cout<< count;
    return 0;
}