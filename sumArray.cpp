#include <iostream>
using namespace std;

int main() {
		int arr[10];
	int size;
	int sum=0;
	cout<<"Enter the size of the array:";
	cin>>size;
	
	cout<<"Enter the elements of array:";	
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Sum of the array:";
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
	
	return 0;
}
