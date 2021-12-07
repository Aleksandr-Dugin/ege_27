#include <iostream> 

using namespace std; 


void number_of_products_div(){

    /* 
        1. считать число     
        2. добавить его к одному из счетчиков соответствующего класса эквивалентности
        3. ответ
     
     **/
    long long int n(0), cur(0); 


    int n154(0), n77(0), n22(0), n2(0), n14(0),n7(0), n11(0),n0(0); 
    cin >> n; 

    for (int i =0; i < n; i++){
        cin >> cur; 
        if (cur % 154 == 0)
            n154++;
        else if (cur % 77 == 0)
            n77++;
        else if (cur % 22== 0)
            n22++;
        else if (cur % 14 == 0)
            n14++;
        else if (cur % 11 == 0)
            n11++; 
        else if (cur % 7 == 0)
            n7++;
        else if(cur % 2 == 0)
            n2++;
        else
            n0++;
    }        



    long long a =n154 * (n154- 1) / 2 + n154* (n77 + n22 + n14 + n11 + n7 + n2) + (n77 * n22 + n77 * n14 + n22 * n14) + (n77 * n2 + n22 * n7 + n14 * n11) + n0 * n154;

    cout << a << endl;
    
    





}


int main(){ 
    number_of_products_div();
    
    return 0; 
}
