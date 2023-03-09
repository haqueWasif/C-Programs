#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;


class Variables{
    protected:    
        float n1, n2;
        char user;
};

class SimpleCalculator : virtual public Variables{
    public:
        void simple_op(void){
            cout<<"Simple Calculator Operation :-"<<endl;
            cout<<"1.Addition, 2.Substraction, 3.Multiplication, 4.Division"<<endl;
        }
        void prompt(void){
            user = getch();
        }
        void set_value(void){
            cout<<"Enter first number: ";
            cin >> n1;
            cout<<"Enter second number: ";
            cin >> n2;
        }    
        void show_simple(void){
            switch(user){
                case '1':
                    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
                    break;
                case '2':
                    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
                    break;
                case '3':
                    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
                    break;
                case '4':
                    cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
                    break;
                default:
                    break;
            }
        }
};

class ScientificCalculator : virtual public Variables{
    public:
        void sci_op(void){
            cout<<"Scientific Calculator Operation :-"<<endl;
            cout<<"5.Logarithm, 6.Exponent, 7.Sine, 8.Cosine"<<endl;
        }
        void prompt(void){
            user = getch();
        }
        void set_value(void){
            if(user != '7' and user != '8'){   
                cout<<"Enter first number: ";
                cin >> n1;
                cout<<"Enter second number: ";
                cin >> n2;
            }
            else{
                 cout<<"Enter a number: ";
                 cin >> n1;
            }
        }    
        void show_sci(void){
            switch(user){
                case '5':
                    cout<<"log " <<n1<< " base " <<n2<<" = "<<log(n1)/log(n2)<<endl;
                    break;
                case '6':
                    cout<<n1<< " to the power " <<n2<<" = "<<pow(n1, n2)<<endl;
                    break;
                case '7':
                    cout<<"Sin("<<n1<<")"<<" = "<<sin(n1)<<endl;
                    break;
                case '8':
                    cout<<"Cos("<<n1<<")"<<" = "<<cos(n1)<<endl;
                    break;
                default:
                    break;
            }
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    public:
        void set_value(void){
            ScientificCalculator :: set_value(); // Amiguity resolution
        }        
        void prompt(void){
            ScientificCalculator :: prompt(); // Ambiguity resolution
        }        
};

int main(void){
    HybridCalculator calc;
    calc.simple_op();
    calc.sci_op();
    calc.prompt();
    calc.set_value();
    calc.show_simple();
    calc.show_sci();

    return 0;
}