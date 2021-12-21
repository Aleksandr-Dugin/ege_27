#include <iostream> 
#include <vector> 
using namespace std; 

void effective_solution(){
	/*
		1.Ввод и выввод входных данных 
		2.
	  **/




	int n;
	cin >> n;
	vector<int> numbers(n);

	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}

	for (int i = 0; i < n; i++){
		cout << numbers[i] << endl;
	}


}


int main(){ 
    	effective_solution();
	return 0; 
}
