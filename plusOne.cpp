#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<int> v;
	int input;
	cin>>input;
	v.push_back(input);
	while(input>-1)
	{
		cin>>input;
		v.push_back(input);
	}

	cout<<"Initial vector: ";
	for(unsigned int i=0; i<v.size()-1; i++)
	{
		
		cout<<v[i]<<" ";
	}

	int swch=0;
	

	for(unsigned int i =v.size()-1; i>=0; i--)
	{

		if(v[i]>=0 && v[i]<=8)
		{
			v[i]=v[i]+1;
			swch++;
			break;
		}
		else if(v[i]==9)
		{
			cout<<" set to 0 = v[i]: "<<v[i];
			v[i]=0;

			//v.insert( v.begin(), 1);
			continue;
		}
		
	}
	if(swch==0 || v.size()==1)
	{
		v.insert( v.begin(), 1);
	}
	cout<<endl;
	cout<<"Init vector +1: ";
	for(unsigned int i=0; i<v.size()-1; i++)
	{
		cout<<v.at(i)<<" ";
	}


	return 0;
}