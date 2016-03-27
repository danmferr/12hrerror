#include <iostream>
#include <string>
using namespace std;

class invalidSec // define the class
{
	public:
		invalidSec() // define message
		{
			message="The value of sec must be between 0 and 59";
		}
		invalidSec(string str)
		{
			message = str + "nope";
		}
		string what() // return the message if what is called
		{
			return message;
		}
		private:
		string message;
};