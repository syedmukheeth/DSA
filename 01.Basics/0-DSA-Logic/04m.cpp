#include <iostream>
using namespace std;
  //Check if a number is a palindrome
int main() {
    int num,rev=0;//i am moron i missed initializing rev from 0
    cout<<"enter the num:";
    cin>>num;
    int temp=num;
    while(num!=0) {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }  
      if (temp==rev)
    {
      cout<<"The num " <<rev<< " is palindrome";
    }
    else
    cout<<"The num is not palindrome";
    return 0;
}