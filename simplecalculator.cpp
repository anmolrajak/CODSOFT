#include <iostream> 
using namespace std;
int main()
{
	float x,y,z;
	int ch;
	cout<<"***** A simple calculator *****";
	do
	{
	
	    cout<<"\nEnter 1 for addition";
     	cout<<"\nEnter 2 for subtraction";
    	cout<<"\nEnter 3 for multiplication";
	    cout<<"\nEnter 4 for division";
    	cout<<"\nEnter 5 for exit";
    	cout<<"\nEnter your choice : ";
      	cin>>ch;
    	switch (ch)
    	{
		case 1:
			cout<<"\nEnter any two number : ";
			cin>>x>>y;
			z=x+y;
			cout<<"\nAddition is:= "<<z;
			break;
		case 2:
            cout<<"\nEnter any two number : ";
            cin>>x>>y;
            z=x-y;
            cout<<"\nSubtractin is: = "<<z;
            break;
		case 3:
            cout<<"\nEnter any two number : ";
            cin>>x>>y;
            z=x*y;
            cout<<"\nMultipilication is: = "<<z;
            break;
		case 4:
            cout<<"\nEnter any two number : ";
            cin>>x>>y;
            z=x/y;
            cout<<"\nDivison is: = "<<z;
            break;
		case 5:
			return 0;
    
		default :
			cout<<"\nEnter correct choice: ";
	    }
	}
	while(1);

	return 0;
}