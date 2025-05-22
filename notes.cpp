#include <iostream>

using namespace std;

int main(){

int  *my_array = new(nothrow) int[100000000000000000];

if (my_array == nullptr){

    cout << "memory allocation failed" << endl;
    int fallback = 1000000;
    my_array = new(nothrow) int[fallback];

    if(my_array == nullptr){

        cout << "fallback allocation failed";
    }
}

for (int i = 0; i <= 10; i++){
    my_array[i] = i + 1;
    cout << my_array[i];
}





}