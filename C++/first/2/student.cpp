#include <iostream>
#include "student.h"
void Student::display()
{
        cin >> num >> name >> sex ;
	cout << "num:" << num <<endl; 
	cout << "name::"<< name <<endl;
	cout << "sex:'"<<sex<<endl;
}
