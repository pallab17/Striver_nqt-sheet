1. check number is palindrome or not
soln - 
  //@pb7
#include <iostream>

using namespace std;

int reverse(int num){
    int sum=0,r;
    while(num>0){
       r = num %10;
       sum = sum*10 + r;
       num=num/10;
    }
    
    return sum;
    
}

int main()
{
    int num = 124;
    int x = num;
    int revNum = reverse(num);
    if(revNum == x){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}

