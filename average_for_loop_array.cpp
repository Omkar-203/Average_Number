#include<iostream>
using namespace std;
// main function
int main()
{
  // array variable to store 5 numbers
  double arr[5]; 
  double sum; // to store sum 
  double avg; // to store result

  // take input values
  cout << "Enter five numbers: ";
  for (int i = 0; i < 5; ++i)
  {
    cin >> arr[i];
  }
  
  // calculate sum value
  sum = 0;
  for (int i = 0; i < 5; ++i)
  {
    sum += arr[i];
  }

  // calculate average value
  avg = sum/5;
  
  // display result
  cout << "Sum = " << sum << endl;
  cout << "Average = " << avg << endl;

  return 0;
}
