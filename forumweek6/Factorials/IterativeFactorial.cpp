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
        cout << "Iteration: The factorial of " << origin << " is " << num << endl;
    }



}

int recursFactorial(int num){
    //formula for factorial is n! = n * (n-1) * ... * 1
    //base case is n = 1, but inputting 0 will also return 1, since 0! = 1
    int base = 0;
    if(num == base){
        return 1;
    }else if (num < base){
        return 0; //negative factorials should be undefined, so in place of that i've just let the function return 0
    }else{
        return num * recursFactorial(num - 1);
    }

}

int main(){
    int n;
    //prompting the user for a number they want to find the factorial for
    cout << "Enter a number you want to find the factorial for: ";
    cin >> n;
    iterFactorial(n);

    cout << "Recursion: The factorial of " << n << " is " << recursFactorial(n) << endl;
    cout << "Note that if the recursion function returns 0, it means that the result is undefined.";

}