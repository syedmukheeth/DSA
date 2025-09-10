#include<bits/stdc++.h>

using namespace std;

void recursion(int count = 0){
    if (count==4) return;
    cout<<count<<endl;
    count++;
    recursion(count);
    
}


int main(){
    // print();
    recursion();
    return 0;
}