#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) { 

  for(int i= 0 ; i <= str.size() + 1; i++)
  {
      cout << str[i] 
  }// code goes here   
  return str; 
            
}

//This will be the function that outputs the final string, given by the length of the  string "array"

int main() { 
  
  // keep this function call here
  cout << FirstReverse(gets(stdin));
  return 0;
    
} 

