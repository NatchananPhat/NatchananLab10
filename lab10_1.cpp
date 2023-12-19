#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int i = 1;
	int a = 0, b = 0, c = 0, d = 0, f = 0 ;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == 'A'){
			a++, i++;
			count[0] = a;
	    }
		else if(grade == 'B'){
			i++;
			count[1] = b++;
		}
		else if(grade == 'C'){
			c++,i++;
			count[2] = c;
		}
	    else if(grade == 'D'){
			d++,i++;
			count[3] = d;
		}
		else if(grade == 'F'){
			f++,i++;
			count[4] = f;
		}
		else if(grade != '0'){
		    cout << "Wrong input. Please input again.\n";
		} 
	}while(grade != '0');
	i--;
	
	
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}