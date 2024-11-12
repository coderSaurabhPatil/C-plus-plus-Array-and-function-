#include <iostream>
#include <functional> //for std::function type
using namespace std;

//Function Declaration (Prototype)
int add(int a , int b );
int add(int a , int b, int c); //Overloaded version of add
void printMessage(const string &message = "Hello, User!"); //Default argument 
inline int multiply(int a, int b); //inline function
void modifyByValue(int x);
void modiByReference(int &x);
int factorial(int n); //Recursive function

int main(){
    //function calling 
    int result = add(3,4);
    cout << "Result of add(3,4):" << result << endl;

    int result2 = add(3,4,5); //calls overload function
    cout << "Result of add(3,4,5):" << result2 << endl;

    printMessage();
    printMessage("welcome to C++ Programming !"); //calus with custom argument 

    //using inline function 
    int product = multiply(5,4);
    cout << "Result of multiply(5,6):"<<product <<endl;
}

//function defination
int add(int a , int b){
    return a+b;
}

//calls overload function Defiation
int add(int a,int b, int c){
    return a+b+c;
}

//Inline function Defination
inline int multiply(int a ,int b){
    return a* b;
}

//Defult Argument Function Defination
