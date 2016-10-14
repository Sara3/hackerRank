#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std; 

vector <int> parseInts(string str) {
   // Complete this function
    
    stringstream ss(str);   //??
    vector<int> result;
    char ch;
    int tmp;
    while(ss >> tmp) {      //??
        result.push_back(tmp);
        ss >> ch;           //??
    }
    return result;
}



int main()
{
   
    string str;
    getline (cin,str);
    vector<int> rowCol = parseInts(str);
    int numRow = rowCol[0];
    int numCol = rowCol[1];
    
    vector< vector<int>> vect(numCol, vector<int>(numRow)) ;
    
    for(int i=0; i<numCol; i++)
    {
       getline (cin,str);
        vector<int> rowCol = parseInts(str);
        for(int j=0; j<numRow; j++)
        {
            vect[i][j]= rowCol[j];    
        }
    }
    
  
    // Write
   // vect[0][0] = 10;
    // Read
  //  int a = vec[2][3];
    
   // stringstream ss(str);


    for (int i=0; i< numRow; i++)
        {
        for(int j=0; j<numCol; j++)
            {
            cout<<vect[i][j]<< " ";
        }
        cout<<endl;
    }
        
      //  cout<<vect[0][0]<<endl;
        // cout << rowCol.at(i)<<endl;
    return 0;
} 
