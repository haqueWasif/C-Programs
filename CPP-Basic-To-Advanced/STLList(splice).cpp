#include<iostream>
#include<list>

using namespace std;

void display(list <int> &lst){
    list <int> :: iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout<< *itr <<" ";
    }
    cout<<endl;
} 
int main(){
    list <int> l1;
    list <int> l2;
    for (int i = 1; i < 5; i++)
    {
        l1.push_back(i);
        l2.push_back(i*10);
    }
    display(l1);
    display(l2);
    
    list <int> :: iterator iter1;
    list <int> :: iterator iter2;
    iter1 = l1.begin();
    iter1++;
    iter2 = l2.begin();
    

    l1.splice(iter1, l2, iter2, l2.end());
    display(l1);

    return 0;
}