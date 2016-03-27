#include <iostream>
#include <string>
using namespace std;

class invalidHr
{
	public:
		invalidHr() // define message
		{
			message="The value of hr must be between 0 and 12.";
		}
		invalidHr(string str)
		{
			message = str + "nope";
		}
		string what() // throw what message object
		{
			return message;
		}
		private:
		string message;
};