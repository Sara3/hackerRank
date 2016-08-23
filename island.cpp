// you can use includes, for example:
 #include <algorithm>
 #include <vector>
 #include <algorithm>
 using namespace std; 

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int main(){

int digit;
int bigNum;
vector<int> v;
int solution(int X) {
    digit = std::log10((float)X) + 1;
    for (int i = digit - 1; i > 0; i--) 
    { 
    	int divisor = pow((float)10, i);
    	int digits = X / divisor;
    	X -= digits * divisor;
        v.push_back(digits);
    }
    v.push_back(X);
   
   
   for(unsigned i=0; i<v.size()-1; i+=2){
      bigNum = max(v[i], v[i+1]);
      v.erase(v[i]);
      v.insert(v[i],bigNum);
       
   }
   
    return X;
// you can use includes, for example:
 #include <algorithm>
 #include <vector>
 #include <algorithm>
 using namespace std; 

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



int digit;
int bigNum;
vector<int> v;
int solution(int X) {
    digit = std::log10((float)X) + 1;
    for (int i = digit - 1; i > 0; i--) 
    { 
    	int divisor = pow((float)10, i);
    	int digits = X / divisor;
    	X -= digits * divisor;
        v.push_back(digits);
    }
    v.push_back(X);
   
   
   for(unsigned i=0; i<v.size()-1; i+=2){
      bigNum = max(v[i], v[i+1]);
      v.erase(v[i]);
      v.insert(v[i],bigNum);
       
   }
   
    return X;
}


