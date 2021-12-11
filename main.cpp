#include <iostream> 
#include <vector>

using namespace std; 

void number_of_sums_div(){
    /** 
    + 1.считать и заполнить все числа и вывести  
    + 2. вывести все пары чисел 
    3. вывести вместо пар сумму чисел
    4. проверить делимость суммы 
    5. найти и вывести наиобольшую сумму 
     **/
        
    int n, tmp, mx; 
    cin >> n; 
    vector<int> numbers(n); 
    for (int i =0; i < n; i++){
        cin >> numbers[i]; 
    }        
     
    mx = numbers[0];
    for (int i =0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            tmp = numbers[i] + numbers[j]; 
            if ((tmp % 2 != 0) && (tmp > mx))
                mx = tmp;  

        }
    }
    if (mx == numbers[0]){
        cout << -1 << endl; 
    }else 
        cout << mx << endl;

} 


int main(){ 
    
    number_of_sums_div();

    return 0; 
}
