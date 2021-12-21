#include <iostream> 
#include <vector>
using namespace std; 

void ineff_solution(){
	/*
	1. считать и вывести входные данные	
	2. проверка первого условия и вывод
	3. проверка второго условия и вывод
	4. ответ на задачи 
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
    
	ineff_solution();
    	return 0; 
}
