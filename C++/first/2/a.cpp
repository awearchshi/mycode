#include <iostream>
using namespace std;
class cuboid
{
  public:      
	float length,width,height,v;
	void input();
	void calculate();
	void output();
};
void cuboid::input()
{
  cin >> length >> width >> height;
}
void cuboid::calculate()
{
	v = length;
}

