// <<Renyl de Guzman - 201911751 >>
// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
#include <string>
using namespace std;
	
int main()
{
	int spd;
		int fine1;
		int add1;
		int eachmile1;
		int plus1;
			int fine2;
			int add2;
			int eachmile2;
			int plus2;
	
	cout << " ==============================================";
	cout << " \n The State Highway Traffic Violations Bureau ";
	cout << " \n Input Your Speed (mph): ";
	cin >> spd;
	
		fine1 = 50;
		eachmile1 = spd - 55;
		add1 = eachmile1 * 5;
		plus1 = add1 + fine1;
	
		fine2 = 125;
		eachmile2 = spd - 70;
		add2 = eachmile2 * 10;
		plus2 = fine2 + add2;
	
	if ( spd <= 70 && spd >= 56 )
	{
		cout <<" \n Additional $5 for each mile: " << eachmile1 << " \n Total fine: $" << plus1;
		cout << " \n ==============================================";
	}
	else if ( spd >= 71 )
	{
		cout << " \n Your fine is: $" << fine2 << "\n Additional $10 for each mile: " << eachmile2 << "\n Total fine: $" << plus2;
		cout << " \n ==============================================";
	}
	else if ( spd <= 55 )
	{
		cout << " Your all good! ";
		cout << " \n ==============================================";
	}
	else
	{
		cout << "Invalid input, please try again.";
		cout << " \n ==============================================";
	}
	
	return(0);
}
