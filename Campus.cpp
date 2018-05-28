#include <iostream>
using namespace std;

int main()

{
	int blockflats, blockfloor, floor, floorsbefore, x, y, k, n;
	cout << "Write the number of flats in the kratnye floors" << endl;
	cin >> x;
	cout << "Write the number of flats in the non-kratnye floors" << endl;
	cin >> y;
	cout << "Write the number of floors" << endl;
	cin >> n;
	cout << "Write the kratny floor" << endl;
	cin >> k;
	cout << "Write the flat number " << endl;
	cin >> z;
	blockflats = (k - 1) * y + x;
	floorsbefore = z / blockflats * k;
	blockfloor = ((z % blockflats) + y - 1) / y;
	floor = blockfloor + floorsbefore;
	if (floor > n)
	{
		floor = floor % n;
	}

	cout << floor << endl;
	system("Pause");
	return 0;
}
