#include <iostream>

using namespace std;

int main() {
	
	/*
	float input;
    cin >> input;

	float float_num_p = input;
	if (input < 0)
		float_num_p = -input;
	cout << "<float(+)> : " << float_num_p << endl;
    bitset<sizeof(float) * CHAR_BIT> numberInBit(*reinterpret_cast<unsigned long *>(&float_num_p));
    cout << numberInBit << endl;

	if (input < 0) {
		float float_num_m = input;
	    cout << "<float(-)> : " << float_num_m << endl;
	    bitset<sizeof(float) * CHAR_BIT> numberInBit(*reinterpret_cast<unsigned long *>(&float_num_m));
    	cout << numberInBit << endl << endl;
	}
	
	int int_num_p = input;
	if(input < 0)
		int_num_p = -input;
	cout << "<int(+)> : " << +int_num_p << endl;
    cout << bitset<32>(int_num_p) << endl;


	if (input < 0) {
		int int_num_m = input;
		cout << "<int(-)> : " << int_num_m << endl;
   		cout << bitset<32>(int_num_m) << endl;
	}
	*/
	float float_num = 4.25f;
	cout << bitset<sizeof(float) * CHAR_BIT> (*reinterpret_cast<unsigned long *>(&float_num)) << endl;
	float_num *= (1 << 8);
	cout << bitset<sizeof(float) * CHAR_BIT> (*reinterpret_cast<unsigned long *>(&float_num)) << endl;
	// cout <int_num / (1<<8));
	// cout << bitset<42> (int_num) << endl;

    return 0;
}