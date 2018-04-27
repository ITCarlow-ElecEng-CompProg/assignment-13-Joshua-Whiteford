 /**
 *Joshua Whiteford
 *Lab 13
 *Prime Number Calculator
 */

/**< Preprocessor Directives */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
    /**< declaring the variables that will be used in this program */
    int Num;
    int i , n;
    int count1;


    /**< creating the txt file called Prime Number's */
    ofstream PrimeNum("Prime Number's.txt",ios::out);

    /**< Introducing the User and Writing a title to the txt file */
    cout << "\t\tPrime Number Calculator" << endl << endl;
    PrimeNum << "\t\tPrime Number Calculator" << endl << endl;

    /**< Checks to See if the File Opened! */
	if (!PrimeNum)
	{
		cerr << "File Failed to Open!" << endl;
		exit( 1 );
	}

    /**< Getting the User to enter in a number! */
    cout << "Enter a Number!" << endl ;
    cin >> Num;

    /**< Sending the User into a loop to Calculaing the prime Numbers */
    for( i = 2 ; i <= Num ; i++)
    {
        for( n = 2 ; n < i ; n++ )
        {
            //count1 = 0;
            if ( i%n == 0)
            {
              //  count1++;
                break;
            }
        }
        /**< Displaying the Prime Numbers to the User & Writing them to the TXT file! */
        //if (count1 == 0 && i != 1 )
        if (i == n)
        {
            cout << i << endl <<setw(3);
            //if (count1 == 0 && i != 1)
            PrimeNum << i << endl << setw(3);
        }

    }

    return 0;
}
