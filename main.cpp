#include <iostream> 
#include <vector>

using namespace std; 

void number_of_sums_div(){
    /** 
    1.считать и заполнить все числа 
    2. вывести все пары чисел 
    3. вывести вместо пар сумму чисел
    4. проверить делимость суммы 
    5. найти и вывести наиобольшую сумму 
     **/
        
    int n; 
    cin >> n; 
    vector<int> numbers(n); 
    for (int i =0; i < n; i++){
        cin >> numbers[i]; 
    }        
    for (int i =0; i < n; i++){
        cout << numbers[i] << endl;
    }        



} 


int main(){ 
    
    number_of_sums_div();

    return 0; 
}
