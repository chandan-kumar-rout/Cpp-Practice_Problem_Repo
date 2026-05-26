//Q.20. write a program to analyze tokens in a C++ program.
#include <iostream> 
using namespace std; 
int main() 
 {
    string token; 
    cout << "Enter a token: "; 
    cin >> token; 
    if (token == "int" || token == "float" || token == "double" || token == "char" || token == "bool") {
        cout << "The token '" << token << "' is a data type keyword." << endl; 
    } else if (token == "if" || token == "else" || token == "for" || token == "while") {
        cout << "The token '" << token << "' is a control flow keyword." << endl; 
    } else if (token == "+" || token == "-" || token == "*" || token == "/") {
        cout << "The token '" << token << "' is an operator." << endl; 
    } else if (token == ";" || token == "," || token == "(" || token == ")") {
        cout << "The token '" << token << "' is a punctuator." << endl; 
    } else {
        cout << "The token '" << token << "' is an identifier or literal." << endl;
 }
}