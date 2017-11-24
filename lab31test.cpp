// lab31test.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class Array {
	int *data;
	int size;
public:
	Array() {}

	Array(int a) {
		size = a;
		data = new int[size];
		for (int i = 0; i < size; i++) {
			data[i] = i;
		}
		cout << "Constructor\n";
	}

	Array(const Array &o) {
		cout << "Copper" << endl;
		size = o.size;
		data = new int[size];
		for (int i = 0; i < size; i++) {
			data[i] = o.data[i];
		}
	}

	~Array() {
		cout << "Destructor" << endl;
		delete[] data;
	}

	void output() {
		cout << "Output\n";
		cout << "Size: " << size << endl << "Data: ";
		for (int i = 0; i < size; i++) {
			cout << data[i] << " - ";
		}
		cout << endl;
	}


};



int main()
{
	cout << "Input a value" << endl;
	int a;
	cin >>  a;
	Array object(a);
	object.output();
	Array obj = object;
	obj.output();
	system("pause");
    return 0;
}

