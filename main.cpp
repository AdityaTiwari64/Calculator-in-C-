#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    char op;

    cout<<"====================================================="<<endl;
    cout<<"-------- Welcome To Our New Calculator --------------"<< endl;
    cout<<"=====================================================" << endl;

    cout<<"Please Enter The First Number: \n";
    cin>> a;
    cout<<"Please Choose The Operator: \n";
    cin>> op;
    cout << "Please Enter The Second Number: \n";
    cin>> b;

    if (op == '*'){
        c = a * b;
        cout<< "Your Answer is: "<<c;
    }
    if (op == '-'){
        c = a - b;
        cout<< "Your Answer is: "<<c;
    }
    if (op == '+'){
        c = a + b;
        cout<< "Your Answer is: "<<c;
    }
    if (op == '/'){
        c = a / b;
        cout<< "Your Answer is: "<<c;
    }
        return 0;
}