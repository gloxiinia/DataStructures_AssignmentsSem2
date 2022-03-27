#include <iostream>

using namespace std;

void iterFactorial(int origin){
    //formula for factorial is n! = n * (n-1) * ... * 1
    int num = 1;
    //iterating to find the factorial
    if(origin < 0){
        cout << "Cannot be done, negative number factorials result in undefined." << endl;
    }else{
        for (int i = 1; i <= origin; i++){
            num *= i;
        }
        cout << "The factorial of " << origin << " is " << num << endl;
    }



}


int main(){
    int n;
    //prompting the user for a number they want to find the factorial for
    cout << "Enter a number you want to find the factorial for: ";
    cin >> n;
    iterFactorial(n);

}