#include<iostream>
using namespace std;

class BankDeposit{
    int principal, years;
    float interestRate, returnValue;

    public:
        BankDeposit(){}; // This default constructor is needed to run without parameters
        BankDeposit(int p, int y, float r); // rate is expressed in the form like 0.14 which means 14%
        BankDeposit(int p, int y, int r); // rate is expressed in the form like 14 which also means 14%
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
       returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
       returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<".Return value after "
    <<years<<" year is "<<returnValue<<endl;
}

int main(){
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    BankDeposit bd1(p,y,r); // or bd1 = BankDeposit(p,y,r)
    bd1.show();
    
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    BankDeposit bd2(p,y,R); // or bd2 = BankDeposit(p,y,R)
    bd2.show();

    BankDeposit bd3; // If the default constructor is not used it will give an error as it cannot find the default constructor

    return 0;
}