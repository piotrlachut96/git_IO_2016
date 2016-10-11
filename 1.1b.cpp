#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Podaj a: ";
  cin>>a;
  cout<<"Podaj b: ";
  cin>>b;
  cout<<"Podaj c: ";
  cin>>c;
  if (a<b)
  {
    if (a<c)
      cout<<"Najmniejsze jest a="<<a<<endl;
    else
      cout<<"Najmniejsze jest c="<<c<<endl;
  }
  else
  {
    if (b<c)
      cout<<"Najmniejsze jest b="<<b<<endl;
    else
      cout<<"Najmniejsze jest c="<<c<<endl;
  }
  return 0;
}
