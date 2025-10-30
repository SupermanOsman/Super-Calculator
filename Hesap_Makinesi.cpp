#include <iostream>
#include <cmath>

using namespace std;

int main(){

    string operation;
    double number1, number2;

    cout << "SupermanOsman Hesap Makinesine Hos Geldiniz Lutfen Islem Yapmak Istediginiz Sayiyi Giriniz: ";
    cin >> number1;

    cout << "Lutfen Yapmak Istediginiz Islemi Secin (+, -, *, /): ";
    cin >> operation;

    cout << "Lutfen Ikinci Sayiyi Giriniz: ";
    cin >> number2;

    if (operation == "+") {
        cout << number1 + number2;
    } 
    else if (operation == "-") {
        cout << number1 - number2;
    } 
    else if ( operation == "*") {
        cout << number1 * number2;
    } 
    else if ( operation == "/") {
        cout << number1 / number2;
    }
    else {
        cout << "Allah Allah Bir Sikinti Cikti Hayirdir Insallah!";
    }

    

    return 0;
}