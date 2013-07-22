/***************************************************/
// Description: This program creates a two-dimensional array
//  			that stores calculated binomial coefficent values.
//				The user is asked to give the n and k values, 
//				and C(n,k) is printed to the screen.
/**************************************************/



#include <iostream>
using namespace std;


int B_COEFFICIENT(int n, int k){
	int** C = new int*[n];   //creates a singular array (rows)

	for(int i=0; i <= n; i++){
		C[i] = new int[k]; //adds on k number of columns to each row
		for(int j=0; j <= k; j++){
			if(j==0 || j==i){
				C[i][j] = 1;
			}else if(j > i){
				C[i][j] = 0;
			}else{
				C[i][j] = C[i-1] [j-1] + C[i-1] [j];
			}
		}
	}
	return C[n][k];
}

void main(){
	int num1,num2,result;

	cout << "Enter an integer (n): " << endl;
	cin >> num1;
	cout << "Enter an integer (k): " << endl;
	cin >> num2;

	result = B_COEFFICIENT(num1, num2);

	cout << "The Binomial Coefficient C(n,k) is : " << result << endl;
}

