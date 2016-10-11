#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n;
  cout<<"podaj rok: ";
  cin>>n;
  if ((n%4)==0)
  {
    if ((n%100)==0)
    {
      if ((n%400)==0)
      {
        cout<<"Podany rok jest przestepny"<<endl;
        return 0;
      }
      else
      {
        cout<<"Podany rok nie jest przestepny"<<endl;
        return 0;
      }
    }
    else
    {
      cout<<"Podany rok jest przestepny"<<endl;
      return 0;
    }
  }
  else
  {
    cout<<"Podany rok nie jest przestepny"<<endl;
    return 0;
  }
  return 0;
}
