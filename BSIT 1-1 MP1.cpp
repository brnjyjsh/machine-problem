// <<Renyl de Guzman - 201911751 >>
// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string name;
	string location;
	string wEmployee;
		string l1 = "N";
		string l2 = "P";
		string w1 = "A";
		string w2 = "B";
		string l11 = "n";
		string l22 = "p";
		string w11 = "a";
		string w22 = "b";
	
	int time;
	int ans;
		float regularN;
		float grossN;
		float overN;
		float taxN;
		float netN;
	
		float regularP;
		float grossP;
		float overP;
		float taxP;
		float netP;
	
		float xd;
		int cntemp = 0;
	
	cout << "==============================" <<endl;
	cout <<"***Auto mobile repair shop***"<<endl;
	cout <<"   ***Payroll Program***"<<endl;

do{
	
	cout<<"\nTotal of processed employees: "<<cntemp;

	cout<<"\nPAYROLL";
	cout<<"\nEnter the name of Employee: ";
		cin>>name;
	cout<<"\nChoose you wage location: "<<"\n(N) NCR"<<"\n(P) Province"<<"\nType here: ";
		cin>>location;
	cout<<"\nWhat employee are you?"<<"\n(A) Fulltime"<<"\n(B) Part time"<<"\nType here: ";
		cin>>wEmployee;
	cout<<"\nInsert hours of work: ";
		cin>>time;
	cout<<"\nNCR wage: 62.5/hr"<<"\nProvince wage: 37.5/hr";


		xd = time - 40;

		regularN = 62.5*time;
		overN = 1.5*62.5*xd/40;
		grossN = regularN + overN;
		taxN = grossN * 0.07;
		netN = grossN - taxN;

		regularP = 37.5*time;
		overP = 1.5*37.5*xd/40;
		grossP = regularP + overP;	
		taxP = grossP * 0.07;
		netP = grossP - taxP;


	if (location == l1 && wEmployee == w1 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}	

	else if (location == l1 && wEmployee == w1 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w11 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0"<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w11 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w2 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w2 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w22 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l1 && wEmployee == w22 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w1 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w1 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w11 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w11 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxN;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w2 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w2 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overN;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w22 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularN;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossN;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : ";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netN;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l11 && wEmployee == w22 && time >= 40 )
	{
		cout<<"\nAll total earnings: "
		<<"\nRegular pay: "<< regularN
		<<"\nOvertime pay: "<< overN
		<<"\nGross pay: "<< grossN
		<<"\nTax Pay 7% : 0"
		<<"\nNet pay: "<< netN
		<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w1 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w1 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w11 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w11 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w2 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w2 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w22 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l2 && wEmployee == w22 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w1 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w1 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w11 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w11 && time >= 41 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : "<< taxP;
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w2 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w2 && time >= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w22 && time <= 40 )
	{
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: 0";
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}

	else if (location == l22 && wEmployee == w22 && time >= 40 )
	{
		
		cout<<"\nAll total earnings: ";
		cout<<"\nRegular pay: "<< regularP;
		cout<<"\n-";
		cout<<"\nOvertime pay: "<<overP;
		cout<<"\n-";
		cout<<"\nGross pay: "<< grossP;
		cout<<"\n-";
		cout<<"\nTax Pay 7% : 0";
		cout<<"\n-";
		cout<<"\nNet pay: "<< netP;
		cout<<"\nDo you want to process another employee?"<<"\n (1) for Yes"<<"\n (2) for No"<<"\n:";
			cin>>ans;
	}


	else {cout<<"\nError Inputs, please try again.";

}
	cntemp +=1;
}
	while (ans == 1);

	return 0;	
}
