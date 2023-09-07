q3. prime no 
ans . //@pb7
#include <iostream>
#include <cmath>
using namespace std;
bool prime (int num)
{
    if(num==0 || num==1) return false;
  for (int i = 2; i <= sqrt(num); i++)
    {
      if (num % i == 0)
	{
	  return false;
	  
	}
    }
    
  return true;

}

int main ()
{
  int num = 9;
  bool ans = prime(num);

  if ( ans == true)
    {
      cout << "prime" << endl;
    }
  else{
    cout<<"not prime"<<endl;
  }
}
