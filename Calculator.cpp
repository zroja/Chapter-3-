// Zahin Roja
// October 5, 2017
// Lab 5: Calculator

#include <iostream>
using namespace std;
int main()
{
   // Variables
   int num1, num2, answer;
   char ops;
   bool moreProcessing;

   // Int
   moreProcessing = true;

   // processing
   while (moreProcessing == true)
   {
      // input
      cout << "Enter an equation or 0 x 0 to exit: " ;
      cin >> num1 >> ops >> num2;

      switch (ops)
      {
      case 'x':
         if (num1 == 0 && num2 ==0)
         {
            moreProcessing = false;
         }
         else
         {
         answer = num1 * num2;
         cout << num1 << " " << ops << "  " << num2 << " = " << answer << endl;
         }
      break;
      case '/':
         if (num1 == 0 && num2 ==0)
         {
            moreProcessing = false;
         }
         else if ( num2 == 0 )
         {
            cout << " Error -- cannot divide by 0"  << endl;
         }
         else
         {
            answer = num1 / num2;
            cout << num1 << " " << ops << "  " << num2 << " = " << answer << endl;
         }
      break;
      case '+':
         if (num1 == 0 && num2 ==0)
         {
            moreProcessing = false;
         }
         else
         {
            answer = num1 + num2;
            cout << num1 << " " << ops << "  " << num2 << " = " << answer << endl;
            }
      break;
      case '-':
         if (num1 == 0 && num2 ==0)
         {
            moreProcessing = false;
         }
         else
         {
            answer = num1 - num2;
            cout << num1 << " " << ops << "  " << num2 << " = " << answer << endl;
         }
      break;

      }
   }
   cout << "Thanks for using the calculator. Goodbye." << endl;
   return 0;
}

         
