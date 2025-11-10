#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breath;
};

int main()
{

    // struct Rectangle r = {10 , 15};
    // cout<<r.length<<endl;
    // cout<<r.breath<<endl;
    // Rectangle *p = &r; // create a pointer to the r

    // creating memory on the heap
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->breath = 16;

    cout << p->length << endl; // Accessing the variable using pointers
    cout << p->breath << endl;

    return 0;
}