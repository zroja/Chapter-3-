// Zahin Roja
// October 9, 2017
// Homework5: Long Distance Call

#include <iostream>
using namespace std;
int main()
{
   // Variables
   int  minutes, time;
   char day, day2;
   double total;
   char choice;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   do
   {
      // Input
      cout << "What day of the week would you like to call? " ;
      cin >> day >> day2;
      cout << "What time will you start your call?" << endl ;
      cin >> time;
      cout << "What is the length of your call in minutes?" << endl;
      cin >> minutes;

      // Processing
      if((( day =='M' && day2=='o') || (day=='M' && day2=='O') || (day=='m' && day2=='o') || (day=='m' && day2=='O') && (time>= 800 && time <= 1800)))
      {
         total = .40 * minutes;
      }
      else if( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if((( day =='T' && day2=='u') || (day=='T' && day2=='U') || (day=='t' && day2=='u') || (day=='t' && day2=='U') && (time>= 800 && time <= 1800)))
      {
               total = .40 * minutes;
      }
      else if( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if((( day =='W' && day2=='e') || (day=='W' && day2=='E') || (day=='w' && day2=='e') || (day=='e' && day2=='E') && (time>= 800 && time <= 1800)))
      {
         total = .40 * minutes;
      }
      else if( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if((( day =='T' && day2=='h') || (day=='T' && day2=='H') || (day=='t' && day2=='H') || (day=='t' && day2=='h') && (time>= 800 && time <= 1800)))
      {
         total = .40 * minutes;
      }
      else if( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if((( day =='F' && day2=='r') || (day=='F' && day2=='R') || (day=='f' && day2=='R') || (day=='f' && day2=='r') && (time>= 800 && time <= 1800)))
      {
         total = .40 * minutes;
      }
      else if( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if((( day =='F' && day2=='r') || (day=='F' && day2=='R') || (day=='f' && day2=='R') || (day=='f' && day2=='r') && (time>= 800 && time <= 1800)))
       {
         total = .40 * minutes;
      }
      else if ( time < 800 || time > 1800)
      {
         total = .25 * minutes;
      }

      if(( day == 'S' && day2 == 'a') || (day=='S' && day2 == 'A') || (day=='s' && day2 =='A') || (day=='s' && day2 =='a'))
      {
         total = .15 * minutes;
      }

      if(( day == 'S' && day2=='u') || (day=='S' && day2=='U') || (day=='s' && day2=='U') || (day=='s' && day2=='u'))
      {
         total = .15 * minutes;
      }

      // Output
      cout << "The cost of your call is: $" << total << endl;
      cout << "Do you want to rerun? (Y = Yes) (N = No)";
      cin  >> choice;
   } while ((choice == 'Y' || choice == 'y'));

   cout << "Have a nice day" << endl;
   return 0;
}
