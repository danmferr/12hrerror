#include <iostream>
#include <string>
using namespace std;

class invalidMin
{
	public:
		invalidMin() // define message
		{
			message="The value of min must be between 0 and 59.";
		}
		invalidMin(string str)
		{
			message = str + "nope";
		}
		string what() // return message if what is called
		{
			return message;
		}
		private:
		string message;
};