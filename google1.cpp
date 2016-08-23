#include <iostream> 
#include <vector>
#include <algorithm>
#include <numeric>  
#include <sstream>
using namespace std;


/*
replace two adjecent number with the bigger one and output the smallist combination. 



*/

int main(){
	int num;
	num = 233614;


	vector <int> arr;
	int Lastdig;

	while(num/10){
		Lastdig = num%10;
		arr.push_back(Lastdig);
		num = num/10;
	}
	arr.push_back(num);
	reverse(arr.begin(),arr.end());

	cout<<"first arr"<<endl<<endl;
	
	for(int i=0; i<arr.size(); i++)
		{   
			cout<<arr[i];
		}
	cout<<endl<<endl<<endl;



 	vector <int> arr2;
 	vector <int> arr3;
 	int result;
 	arr2=arr;
 	int min=num;
 	int j,i;
 	int l =0;
 
	for(i=0; i<arr2.size()-1; i++){
		l=0;
		arr2=arr;
		if(arr2[i]>arr2[i+1]){
			arr2.erase(arr2.begin()+(i+1));

		}else{
			arr2.erase(arr2.begin()+i);
		}

		for(j=0; j<arr2.size(); j++){
			l=10*l +arr2[j];
		}
		
		arr3.push_back(l);
	}

	min = arr3[0];
	for(int i=1; i<arr3.size(); i++){
		if(min>arr3[i]){
			min=arr3[i];
		}
	}
	cout<<min;

return 0;
}