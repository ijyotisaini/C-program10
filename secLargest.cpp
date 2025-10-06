#include<climits>
#include<iostream>
using namespace std;

int main(){

       int array[] = { 1, 2, 3, 6, 6 };
    int n = sizeof(array) / sizeof(array[0]);


    int first = INT_MIN, second = INT_MIN;


    for (int i = 0; i < n; i++) {
     
        if (array[i] > first) {
            second = first;
            first = array[i];
        }
        
        else if (array[i] > second && array[i] < first) {
            second = array[i];
        }
    }

  
    cout << "Second Largest Element in the Array: "
         << second << endl;
    return 0;
}
