#include <iostream> 
#include <vector>
using namespace std; 

void number_sums_div(){
    /* 
    +1.считать и заполнить все числа и вывести  
    +2. вывести все пары чисел 
    +3. вывести вместо пар сумму чисел
    +4. проверить делимость суммы и цифры большие 40 
    +5. найти и вывести количество таких сумм 


     **/

    int t, c; 
    vector<int> numbers; 
    while (t != -9999){
        cin >> t; 
        numbers.push_back(t); 
    }
    c = 0;
    numbers.pop_back(); 

    for (int i = 0; i < numbers.size(); i++){
        for (int j = i + 1; j < numbers.size(); j++){
    
            if (((numbers[i] + numbers[j]) %40 == 0) && (numbers[i] > 40 || numbers[j] > 40)){
                c++;
            }
        }

    }
    cout << c << endl;
}


int main(){ 
    
    number_sums_div();
    return 0; 
}
