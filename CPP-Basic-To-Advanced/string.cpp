#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    //string str;
    // cin >> str;
    // cout << str;
    
    /**** Other way of declaring string ****/
    // string str(5, 'n'); // gives output nnnnn
    // cout << str << endl;
    
    /**** Another way of declaring string ****/
    // string str = "ApniKaksha";
    // cout << str;

    /**** Another way of declaring string ****/
    // string str;
    // getline(cin, str);
    // cout << str << endl;

    /**** Different functions in strings ****/
    // string s1 = "fam", s2 = "ily";

    // // s1.append(s2);  // updates s1 to family
    // // cout << s1 << endl;

    // cout << s1+s2 << endl; // s1 and s2 are unchanged 

    /*** Clear function ***/
    // string abc = "dsfafda sdf dasfds  dafs";
    // abc.clear();
    // cout << abc;

    /*** Comparing strings ***/
    // string s1 = "abc", s2 = "xyz";
    // cout << s2.compare(s1) << endl;
    // if (s2.compare(s1) == 0){
    //     cout<<"Strings are equal"<<endl;
    // }
    // else if (s2.compare(s1) == -1){
    //     cout<<"First unequal character of the s2 has smaller ascii value than s1"<<endl;
    // } 
    //  else if (s2.compare(s1) == 1){
    //     cout<<"First unequal character of the s2 has greater ascii value than s1"<<endl;
    // } 
    
    /*** empty function ***/
    // string s1 = "abc";
    // cout << s1 << endl;

    // s1.clear();

    // if(s1.empty()){
    //     cout << "String is empty" << endl;
    // }   

    /*** erase function ***/
    // string s1 = "nincompoop";

    // s1.erase(3, 3); // (starting point, number of characters to delete)
    // cout << s1 << endl;

    /*** find function ***/
    // string s1 = "nincompoop";

    // cout << s1.find("com") << endl; // find returns the first index where it is found
    // return 0;

    /*** insert function ***/

    // string s1 = "nincompoop";

    // cout << s1.insert(2, "lol") << endl;
    
    /*** size and length function ***/
    // string s1 = "nincompoop";
    
    // cout << s1.size() << endl;
    // cout << s1.length() << endl;
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     /* code */
    //     cout << s1[i] << " ";
    // }
    // cout<<endl;
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     /* code */
    //     cout << s1[i] << " ";
    // }
    
    /*** substr function ***/
    // string s1 = "nincompoop";

    // string s = s1.substr(6, 4); // (starting position, number of characters we want)

    // cout << s << endl;

    /*** stoi and to_string function ***/
    // string s1 = "786";
    // int x = stoi(s1); // Converts the string to integer
    // cout << x+2 << endl;

    // int x =786;
    // cout << to_string(x) + "2" << endl;     

    /*** sort function ***/
    // string s1 = "xcmnmvzcxmfas";

    // sort(s1.begin(), s1.end());

    // cout << s1 << endl;
    // return 0;
}
