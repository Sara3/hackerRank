#include <iostream>
#include <vector>
#include <stack>
#include <String>
using namespace std;


int main ()
{
  stack<string> name;
  string n;
  char quest;

  cout<<"data : ";
  cin>>quest;
  while (quest == 'Y')
  {
  	cout<<"name";
  	cin>>n;
  	name.push(n);
  	cin>>quest;
  }
  cout<<"size"<<name.size()<<endl;

	return 0;
}

