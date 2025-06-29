// <<Renyl de Guzman - 201911751 >>
// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
#include <string>
using namespace std;

int main()
{
		float bagweight;
		float charge;
		float plus;
		float last1;
		float last2;
	
	cout << " ===============================================================================";
	cout << " \n Welcome to our Airline, Please kindly enter the amount weight of your baggage. ";
	cout << " \n Insert the amount weight of your baggage here: ";
	cin >> bagweight;
	
		charge = 5.00;
		plus = bagweight - 50;
		last1 = 0.95 * plus;
		last2 = last1 + charge;
	
	if ( bagweight <= 50 )
	{
		cout << " \n No Charge.";
		cout << " \n ===============================================================================";
	}
	else if ( bagweight > 50 )
	{
		cout << " \n Your charge: $" << charge << " \n Additional $0.95 for each pound over 50 lbs: " << last1 << " \n Total charge: $" << last2;
		cout << " \n ===============================================================================";
	}
	else 
	{
		cout << " Invalid input, please try again.";
		cout << " \n ===============================================================================";
	}
	
	return(0);
}
