
//24070123135
#include<iostream>
using namespace std;
int main() {
      cout << "  Simple Calculator  " << endl;
      float a,b;
      cout << "Enter the first number: ";
      cin >> a;
      cout << "Enter the second number: ";
      cin >> b;
      float sum = a + b;
      float diff = a - b;
      float mult = a * b;
      float div = a / b;
      cout << "\nSum: " << sum; 
      cout << "\nDifference: " << diff;  
      cout << "\nProduct: " << mult;  
      cout << "\nDivision: " << div;  
    return 0;
    
}
/* Simple Calculator  
Enter the first number: 5
Enter the second number: 6

Sum: 11
Difference: -1
Product: 30
Division: 0.833333
