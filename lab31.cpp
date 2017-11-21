/* ������� ����� ������������ ������. ����� ������ ���������

� ������������(�� ���������� ���������, �� ������� � ���������� ���������), � ��� ����� ����������� �����������;

� ����������;

� ������������� �������� ������������;

� ������� ���������� �������� � ����� ������� � � �������� �������;

� ������� �������� �������� �� �������� �������;

� ������� �������� ���������� ��������� ��������� �������� � ������.

� ������ ������ ���� ������������� �������� ��������� � ����� � �������� ���������� �� ������ ��������� �������.
*/

#include "stdafx.h"
#include "iostream"
using namespace std;


class DynArray 
{
	int *arr;
	int size;
public:
	DynArray() {};
	DynArray(int a) 
	{
		size = a;
		cout << "Input an array elements:\n";
		int *arr = new int[size];
		for (int i = 0; i < size ; i++) 
		{
			cin >> arr[i];
		}
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "Constructor\n";
			
	}
	DynArray(const DynArray &a)
	{
		cout << "Coper\n";
		arr = new int[a.size];
		size = a.size;
	}
	~DynArray()
	{
		delete[] arr;
		cout << "Destructor\n";
	}
	void output()
	{
		cout << size ;
	}
};

	void Showf(DynArray ab)
	{
		cout << "abj : ";
		ab.output();
	}



int main()
{
				int a;
				cout << "Input a size of array: ";
				cin >> a;
				DynArray obj(a);
				DynArray ob1 = obj;
				getchar();
				cout << "Array was created succesfully. Press any key to continue\n";
				getchar();
				Showf(obj);
				Showf(ob1);
				system("pause");
    return 0;
}

