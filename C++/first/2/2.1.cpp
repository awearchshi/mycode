#include <iostream>
using namespace std;
class Time 
{
   public:
	int a;
	int b;
};
int main ()
{
	Time t,*p,&t1=t ;
	p = &t;
	//t1 = t;
	cin >> t.a ; 
	cout << t.a << p -> a <<t1.a << endl;
	return 0;


}
