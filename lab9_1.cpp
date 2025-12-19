#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double money1,Interest,money2 ; //(ต้นทุน,ดอกเบี้ย,เงินจ่ายคืนได้ตอนสิ้นปี)
	cout << "Enter initial loan: ";
	cin >> money1;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest;
	cout << "Enter amount you can pay per year: ";
	cin >> money2;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	for(int i = 1; i > 0; i++){	
		double b = money1 * (Interest/100);
		double total = money1 + b;
		double d = total - money2;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << money1;
	cout << setw(13) << left << b;
	cout << setw(13) << left << total;
	if(money2 < total){
	cout << setw(13) << left << money2;
	}else cout << setw(13) << left << total;
	if(total - money2 > 0) cout << setw(13) << left << d;
	else cout << setw(13) << left << 0.00;
	cout << "\n";
	money1 = d;
	if(d < 0) break;
	}	
	
	return 0;
}
