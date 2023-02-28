#include<iostream>
#include<string>
#include<math.h>
#define PI acos(-1)
using namespace std;

int main() {
    #pragma acc parallel
	{
		const int alength = pow(10, 7);
		double sum = 0;
		double* array = new double[alength];

        #pragma acc loop
		for (int i = 0; i < alength; i++) {
			array[i] = sin(2 * PI * i / alength);
			sum += array[i];
		}
		cout << sum << endl;
	}
	
	
	
}


