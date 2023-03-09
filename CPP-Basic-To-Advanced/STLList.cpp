#include<iostream>
#include<list>

using namespace std;

// We use list if we want insertion and deletion faster 


void display(list <int> &lst){
    list <int> :: iterator itr;
    // itr = lst.begin(); points to the first element of the list
    // lst.begin() is a reference of the first element of lst 
    for (itr=lst.begin(); itr != lst.end(); itr++)
    {
        cout<< *itr<<" ";
    }
    cout<<endl;
    
}
int main(){
    list <int> list1; // List of 0 Length 

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);

    display(list1);
    
    /* Removing elements from the list */

    // list1.pop_back(); // removes the last element
    // list1.pop_front(); // removes the first element
    // list1.remove(9); // removes all the occurrence specified element 
    // display(list1);

    /* Sorting the list */

    // list1.sort();
    // display(list1);

    /* Reversing the list */
    // list1.reverse();
    // display(list1);


    list <int> list2(3); // Empty List of size 7
    list <int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    /* Merging the list */

    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);

    

    return 0;
}