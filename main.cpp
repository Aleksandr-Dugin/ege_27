#include <iostream> 
#include <vector> 


using namespace std; 

void min_sum_min_distance_ineff(){
    /** 
    1. считать и заполнить числа 
    2. вывести все пары чисел 
    3. вместо пар вывести пары
    4. вместо пар вывести сумму
    5. вывести минимальную сумму 
     */
        
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
    
    min_sum_min_distance_ineff();

    return 0; 
}
