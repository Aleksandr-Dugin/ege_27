#include <iostream> 
#include <vector>
using namespace std; 

void ineff_solution(){
	/*
	*1. считать и вывести входные данные	
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
		for (int j = i + 1; j < n; j++){					
			for (int p = j + 1; p < n; p++){
				if ((numbers[i] * numbers[j] * numbers[p]) % 4 == 0){
					cout << numbers[i] + numbers[j] + numbers[p] << endl;
				}
			}       	
			
		}
	}
	
}



int main(){ 
    
	ineff_solution();
    	return 0; 
}
