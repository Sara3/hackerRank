
#include <iostream> 
#include <string>
using namespace std;

string reducedstr(string str);

int main(){
int size;
int subsize;

 string x = "brrb";
 
 string strOut;
 strOut = reducedstr(x);
 cout<<strOut;

return 0;

}

string reducedstr(string str){
 int counter = 0;
	for(int i=1; i<str.size(); i++){
		if(str[i-1]==str[i]&&counter==0){
			str.erase(i-1, i+1);
			counter =1;
		}
	}
	return str;
}