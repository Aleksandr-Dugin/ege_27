#include <iostream> 
#include <vector> 
using namespace std; 

void number_of_products_div(){
  /**
        1. считать и запомнить числа
        2. вывести все пары чисел 
        3.вместо пар вывести произведение 
        4. проверить делимость произведений
        5. посчитать и вывести количество подходящих произведений     
    
   */   
	
	int N;
       cin >> N;	
	vector<int> numbers(N); 
	
    	for (int i = 0; i < N; i++){
    		cin >> numbers[i]; 
    	}
	for (int i = 0; i < N; i++){
        	for (int j = i + 1; j < N; j++){
			if (numbers[i] * numbers[j] % 110 == 0){
				cout << numbers[i] * numbers[j] << endl;
			}
		
		}
	}
}	


int main(){ 
   number_of_products_div(); 

    return 0; 
}
