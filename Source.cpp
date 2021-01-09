#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Too low. \n";
		break;
	case 2:
		cout << "Correct range. \n";
		break;
	case 3:
		cout << "Too high.\n";
		break;
	}
}