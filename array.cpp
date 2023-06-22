// Q.1) Write a program to create an array of subjects that you are studying in current semester.

//ANS.)

#include <iostream.h>
#inlude <conio.h>
using namespace std;
int main()
{
  const char *_SemIII_Subjects[7] = {"DSA", "Web Development", "Unix and Shell", "Application Development", "Cloud Computing", "Data Communication", "Discrete Mathematics"};
  cout << "\nThe Subjects Are:\n";

  for (int i=0; i<7; ++i)
  {
    cout << _SemIII_Subjects[i] << "\n";
  }

    return 0;
}
