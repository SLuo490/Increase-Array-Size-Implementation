//increase array size using dynamic array

#include <iostream>
using namespace std;

int main () {
    //create a array of size 5
    int *p;
    p = new int[5];
    
    //add values to array p
    for (int i = 0; i < 5; i++) {
        p[i] = i;
    }
    
    //create a new array of size 10;
    int *q;
    q = new int[10];
    
    //copy data from array p into another array q
    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }
    
    //delete array p
    delete[]p;
    p = q;
    q = NULL;
    
    //show array p;
    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
    
    return 0;
}
