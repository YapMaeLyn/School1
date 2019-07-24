#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int acc_num, reg_min, preday_min, prenight_min;
	char serv_code;
	double total;
	const double 
		r_fee = 10.00,
		r_rate = 0.50,
		p_fee = 25.00,
		p_day = .10,
		p_night = .05;
	
		
	cout << "Enter Account Number: ";
	cin >> acc_num;
	
	cout << "Enter Service Code (r/R or p/P): ";
	cin >> serv_code;
	
	switch (serv_code) {
		case 'R': case 'r':
			cout << "Enter Total minutes used: ";
			cin >> reg_min;
			
			if (reg_min > 50) 
			total = (reg_min - 50) * r_rate + r_fee;
			
			else {
				total = r_fee;
				}

			cout << "Account Number: " << acc_num << endl;
			cout << "Service type: Regular Service" << endl;
			cout << "Minutes Used: " << reg_min << endl;
			cout << "Amount Due: " << fixed << setprecision(2) << total << endl;
			
			break;
		
		case 'p': case 'P':
			cout << "Please enter total minutes used between 6:00am - 5:59pm: ";
			cin >> preday_min;
			cout << "Please enter total minutes used between 6:00am - 5:59am: ";
			cin >> prenight_min;
		
			if (preday_min > 75) {
				total = (preday_min - 75) * p_day;
			}
			else if (prenight_min > 100) {
				total = (prenight_min - 100) * p_night;
			}
			total += p_fee;
			cout << "Account Number: " << acc_num << endl;
			cout << "Service type: Premium Service" << endl;
			cout << "Minutes Used in AM: " << preday_min << endl;
			cout << "Minutes Used in PM: " << prenight_min << endl;
			cout << "Total Minutes Used: " << prenight_min + preday_min << endl;
			cout << "Amount Due: " << fixed << setprecision(2) << total << endl;
			break;
	
		default:{
			cout << "!!Invalid Service Code!!";
			}
		}
	
	return 0;
}

