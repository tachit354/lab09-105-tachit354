#include<iostream>
using namespace std;

void printO(int x,int y){
	if(x > 0 && y > 0){
		int i = 0;
		while(i < x){
			int j = 0;
			while (j < y){
				cout << "O";
				j++;
			}
			cout << "\n";
			i++;
		}
	}else cout << "Invalid input";
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
