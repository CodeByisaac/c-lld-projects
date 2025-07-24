#include <iostream>

using namespace std;

int main() {
    int choice;
    do{
        cout<<"Help on:\n";
        cout<<" 1. if\n";
        cout<<" 2. switch\n";
        cout<<" 3. for\n";
        cout<<" 4. while\n";
        cout<<" 5. do-while\n";
        cout<<"Choose one: ";
        cin>>choice;
    } while(choice<1 || choice>5);

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
        case 3: cout<<"The for:\n";
            cout<<"for(init; condition; increment){\n";
            cout<<"  statement;\n";
            cout<<"};";
            break;

        case 4: cout<<"The while:\n";
            cout<<"while(condition) statement;";
            break;

        case 5: cout<<"The do-while:\n";
            cout<<"do {\n";
            cout<<"  statement;\n";
            cout<<"} while(condtion);";
            break;
    }
    return 0;
}
