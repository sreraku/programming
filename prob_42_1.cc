/*
 * Write a program that takes an array of positive integers and returns the 
 * smallest number which is not the sum of a subset of elements of array
*/

#include <vector>
#include <iostream>

using namespace std; // Use this only for small programs

int least_sum(vector <int> v) {
	sort(v.begin(), v.end());

	int max_val = 0;

	for (int a: v) {
		// check if current elem is morethan
		// min of max val.  
		if (a > max_val+1) { 
			break;
		}
		max_val +=a;
	}
	return max_val +1;
}

int main () {

    vector<int>v = { 10, 2, 1, 45, 2, 4};

	int val = least_sum(v);

	cout << "max_val is " << val << endl;;
}
