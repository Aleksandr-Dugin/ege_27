#include <iostream> 
#include <vector> 
using namespace std; 


void num_sum_max_dist(){
    /* 
    1)считать последовательность чисел и вывеcти 
    2) вывести пары удовлетворяющие первому условию
    3) вывести пары удовлетворяющие второму условию
    4) вывести ответ


    **/
    int n; 
    
    cin >> n;   
    
    
    vector<int> numbers(n); 
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for (int i = 0; i < numbers.size(); i++){

        for (int j = i + 1; j < numbers.size() - 1; j++){
    
            if ((numbers[i] + numbers[j]) % 33 == 0){
                cout << numbers[i] << " " << numbers[j] << endl; 
            }

            
        }

    }



}


int main(){ 
    num_sum_max_dist(); 

    return 0; 
}
