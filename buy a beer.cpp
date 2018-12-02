#include <iostream>

using namespace std;
int main(int argc, char** argv) 
{
	float yearOfBirth;
	int age;
	
	cout << "Please enter year of your birth ";
	cin >>	yearOfBirth;
	
	age = 2018-yearOfBirth;
	
	if (age>18)
	
		cout<< "You may now go tho the liquor store and buy me a beer. And yourself too."<<endl;
	
	else
	
		cout<< "Ask somebody if you need a beer. I will not buy you any. But you can bring me one." <<endl;
	
	
	
	return 0;
}
