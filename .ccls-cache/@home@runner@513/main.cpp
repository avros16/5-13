#include <iostream>
using namespace std;


int main() {

int item{0};
  int count{0};

int arr1[5]={20,15,60,5,8};
string arr2[5] = {"1. Laptop", "2. notebook", "3. Bookbag", "4. pencil", "5. pen"};


cout << "Hello, welcome to the store. Today, we have the following items in stock: "<< endl; 

  for (int i = 0; i <5; i++){
    cout << arr2[i] << endl;
  }

cout << "enter the number of the item you would like to buy: ";
  cin >> item;

  cout << "how many do you need? ";
  cin >> count;

  
  
}