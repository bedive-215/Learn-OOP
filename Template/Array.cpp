#include <iostream>
using namespace std;
#include "Array.h"

template<class T>
Array<T>::Array(){}

template<class T>
Array<T>::Array(int n) : size(n), arr(new T[n])
{
	
}

template<class T>
Array<T>::~Array()
{
	delete[] arr;
}

template<class T>
void Array<T>::Nhap()
{
	for (int i = 0; i < size; i++) {
		cout << "nhap vao arr [" << i << "]: ";
		cin >> arr[i];
		cout << "\n";
	}
}

template<class T>
void Array<T>::Xuat()
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}