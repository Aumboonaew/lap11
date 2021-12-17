#include<iostream>
using namespace std;

int main(){
	string grade;
	int count[5] = {'A','B','C','D','F'}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << '\n';
	do{
		cout << "Student [" << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(true){ // if grade is A
			cin >> count[0];//Do something
		}else if(true){ // if grade is B
			cin >> count[1];//Do something
			cin >> count[2];
			cin >> count[3];
			cin >> count[4];//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.";//Do something
		} 
	}while(true);
	
	
	cout << "In total ? students.";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
