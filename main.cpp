#include <iostream> 

using namespace std; 

void number_of_products_div(){
    /* 
        1. считать число     
        2. добавить его к одному из счетчиков соответствующего класса эквивалентности
        3. ответ
     
     **/

    long long int n(0), cur(0);
    int n35(0), n7(0), n5(0), no(0);

    cin >> n; 
    for (int i(0); i < n; i++){
        cin >> cur; 
        if (cur % 35 == 0) n35++; 
        else if (cur % 5 == 0) n5++; 
        else if (cur % 7 == 0) n7++; 
    }
    
    cout << n35 << endl;
    cout << n5<< endl;
    cout << n7 << endl;
}


int main(){ 
	number_of_products_div();    

    return 0; 
}
