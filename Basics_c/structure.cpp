#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
};



int main(){
    struct Rectangle r = {10 , 20};
    printf("Area of Rectangle is %d" , r.length * r.breath);

    return 0;
}