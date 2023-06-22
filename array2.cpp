// Q.2) Write a program to create an array consisting 10 elements and print it in reverse.

//ANS.)

#include <iostream.h>
#include <conio.h>
using namespace std;
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i=9; i>=0; i--)
    cout << arr[i] << "\n";

return 0;
}
