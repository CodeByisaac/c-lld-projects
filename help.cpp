#include <iostream>

using namespace std;

int main() {
    int choice;

    cout<<"Help on:\n";
    cout<<" 1. if\n";
    cout<<" 2. switch\n";
    cout<<"Choose one: ";
    cin>>choice;

    switch(choice){
        case 1: cout<<"The if:\n";
            cout<< "if (condition) statement\n";
            cout<< "else (statement)";
            break;
        case 2: cout<<"The switch:\n";
            cout<<"switch(expression)\n";
            cout<<"    case constant:\n";
            cout<<"         statement sequence\n";
            cout<<"         break\n";
            break;
        default:
            cout<<"selection not found.";
    }
    return 0;
}
