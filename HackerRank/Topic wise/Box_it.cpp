#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box{
    int l, b, h;
    friend ostream& operator << (ostream& out, Box& B);
  public:
    Box(int i=0, int j=0, int k=0) : l(i), b(j), h(k) {}
    Box(Box &B) : l(B.l), b(B.b), h(B.h) {}

    long long CalculateVolume() {return (long long)(b) * l * h;}
    // Type casting to long long is used since product of l,b and h may be very large intially declaring them to int will give incorrect result
    
	bool operator < (Box& B){
        if( (l < B.l) || (b < B.b && l == B.l) || (h < B.h && b == B.b && l == B.l))
        { return true; }
        else { return false; }
    }
    
};

// Using this operator overloading in the class will give error since in class it by default consider one parameter to be the class which causes numbers of parameters to be 3 in class where only 2 are allowed

ostream& operator << (ostream& out, Box& B){
        out << B.l << " " << B.b << " " << B.h << " ";
        return out;
    }
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}