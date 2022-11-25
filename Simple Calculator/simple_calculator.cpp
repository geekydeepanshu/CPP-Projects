#include<iostream>
using namespace std;
void calculator_menu(void);
void calculator_input(void);
void Addition(void);
void Substraction(void);
void Multiplication(void);
void Division(void);
void Quit(void);

int num1,num2;

int main(){
    while(true){
        char choice;
        calculator_menu();
        cin>>choice;
        cout<<endl;
        switch (choice){
            case '+':
                Addition();
                break;
            case '-':
                Substraction();
                break;
            case '*':
                Multiplication();
                break;
            case '/':
                Division();
                break;
            case 'Q':
                Quit();
                break;                                        
            default:
                cout<<"Invalid Operation!"<<endl<<endl; 
       }
       cout<<endl<<endl;
    }
}   

void calculator_menu(void){
    cout<<endl<<"Select a Operation to Perform: "<<endl<<endl;
    cout<<"+. Addition"<<endl;
    cout<<"-. Substractiion"<<endl;
    cout<<"*. Multiplicatioin"<<endl;
    cout<<"/. Division"<<endl;
    cout<<"Q. Quit"<<endl<<endl;
    cout<<"Enter Operation: ";
}

void Addition(void){
    cout<<"------------------"<<endl;
    cout<<"    Addition"<<endl;
    cout<<"-----------------"<<endl<<endl;
    calculator_input();
    cout<<"Sum : "<<num1+num2<<endl;

}

void Substraction(void){
    cout<<"----------------------"<<endl;
    cout<<"    Substraction"<<endl;
    cout<<"----------------------"<<endl<<endl;
    calculator_input();
    cout<<"Difference : "<<num1-num2<<endl;

}

void Multiplication(void){
    cout<<"-----------------------"<<endl;
    cout<<"    Multiplication"<<endl;
    cout<<"-----------------------"<<endl<<endl;
    calculator_input();
    cout<<"Product : "<<num1*num2<<endl;
}

void Division(void){
    cout<<"--------------"<<endl;
    cout<<"   Division"<<endl;
    cout<<"--------------"<<endl<<endl;
    calculator_input();
    cout<<"Quotient : "<<num1/(float)num2<<endl;

}

void Quit(void){
    exit(0);
}

void calculator_input(void){
    cout<<"Enter two Numbers: ";
    cin>>num1>>num2;
}