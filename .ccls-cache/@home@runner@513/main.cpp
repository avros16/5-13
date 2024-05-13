#include <iostream>
using namespace std;


int main() {


int values{0};

  
  cout << "How many values do you want the array to contain? ";
  cin >> values;
  
int arr[values];
  
  for (int i =0; i<values; i++) {
    cout << "input value number " << i+1 << ": ";
    cin >> arr[i]; 
    
  }

  cout << "array values: ";
  
  for (int i =0; i < values; i++) {
    cout << arr[i] << " ";
  }
  ; 




  
  
  
}