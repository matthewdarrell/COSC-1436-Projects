//From: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c 
#include <ios>  // Provides ios_base::failure
#include <iostream>  // Provides cin
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std; 

//Function Prototypes
int getValidInt();
double getValidDouble();
char getValidChar();
string getValidString();

template <typename T>
T getValidatedInput()
{
    T result;
    cin >> result;

    // Check if the failbit has been set, meaning the beginning of the input
    // was not type T. Also make sure the result is the only thing in the input
    // stream, otherwise things like 2b would be a valid int.
    if (cin.fail() || cin.get() != '\n')
    {
        // Set the error state flag back to goodbit. If you need to get the input
        // again (e.g. this is in a while loop), this is essential. Otherwise, the
        // failbit will stay set.
        cin.clear();

        // Clear the input stream using and empty while loop.
        while (cin.get() != '\n')
            ;

        // Throw an exception. Allows the caller to handle it any way you see fit
        // (exit, ask for input again, etc.)
        throw ios_base::failure("Invalid input.");
    }

    return result;
}

template <typename T>
T tryGetValidInput(string message)
{
  T input;
	while (true)
    {
        cout << message;

        try
        {
            input = getValidatedInput<T>();
        }
        catch (exception e)
        {
            cerr << e.what() << ": Invalid input." << endl;
            continue;
        }

        break;
    }
    
    return input; 
}

//Function Definitions
int getValidInt()
{
  return tryGetValidInput<int>("Enter an integer: ");
}
double getValidDouble()
{
  return tryGetValidInput<double>("Enter a number with or without decimals (double): ");
}
char getValidChar()
{
  return tryGetValidInput<char>("Enter a single letter or number (1 digit): ");
}
string getValidString()
{
  return tryGetValidInput<string>("Enter a word (no spaces): ");
}
