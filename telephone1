#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int acc_num, time_call;
	double serv_used, amount1, amount2, amount3;
	char serv_code;
		
	cout << "Enter account number: ";
	cin >> acc_num;
	
	cout << "Enter Service code (r or p): ";
	cin >> serv_code;
	
	cout << "Enter number of minutes the service was used: ";
	cin >> serv_used;
	
	
	cout << endl << "Account number: " << acc_num << endl;
	
	cout << "Service code: ";
	if (serv_code == 'r' || serv_code == 'R') {
		cout << "You have a regular service!" << endl;
		}
	else if (serv_code == 'p' || serv_code == 'P') {
		cout << "You have a premium service!" << endl;
		}
	else { cout << "Invalid service code" << endl;
		}
	cout << "Number of minutes the service was used: " << serv_used << endl;
	
	if (serv_code == 'r'|| serv_code == 'R'){
		cout << "Amount due: ";
		amount1 = (serv_used - 50) * .50 + 10;
		cout << setprecision(2) << fixed << amount1;
		}
	else if (serv_code == 'p' || serv_code == 'P') {
	cout << "Time called (1-24): ";
	cin >> time_call;
		amount2 = (serv_used - 75) * .10 + 25;
		amount3 = (serv_used - 100) * .05 + 25;
		cout << setprecision(2) << fixed;
		
	cout << "Amount due: ";
			switch(time_call){
		case 1:
			cout << amount3 << endl;
			break;
		case 2:
			cout << amount3 << endl;
			break;
		case 3:
			cout << amount3 << endl;
			break;
		case 4:
			cout << amount3 << endl;
			break;
		case 5:
			cout << amount3 << endl;
			break;
		case 6:
			cout << amount2 << endl;
			break;
		case 7:
			cout << amount2 << endl;
			break;
		case 8:
			cout << amount2 << endl;
			break;
		case 9:
			cout << amount2 << endl;
			break;
		case 10:
			cout << amount2 << endl;
			break;
		case 11:
			cout << amount2 << endl;
			break;
		case 12:
			cout << amount2 << endl;
			break;
		case 13:
			cout << amount2 << endl;
			break;
		case 14:
			cout << amount2 << endl;
			break;
		case 15:
			cout << amount2 << endl;
			break;
		case 16:
			cout << amount2 << endl;
			break;
		case 17:
			cout << amount2 << endl;
			break;
		case 18:
			cout << amount3 << endl;
			break;
		case 19:
			cout << amount3 << endl;
			break;
		case 20:
			cout << amount3 << endl;
			break;
		case 21:
			cout << amount3 << endl;
			break;
		case 22:
			cout << amount3 << endl;
			break;
		case 23:
			cout << amount3 << endl;
			break;
		case 24:
			cout << amount3 << endl;
			break;
		default:
			cout << "invalid time" << endl;
			break;}

		}
	return 0;
}

