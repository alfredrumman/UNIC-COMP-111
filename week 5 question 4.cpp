

#include <iostream>
using namespace std;
bool isperfectsquare(long double x)
{
   //find floating point value of 
   //square foot of x
    if (x >= 0) {

        long long sr = sqrt(x);
        // if product of square root 
        // is equal, then 
        // return T/F
        return (sr * sr == x);


   }
    // else return false if  n<0
    return false;



}


int main()
{
    long long x = 11 ;
    if (isperfectsquare(x))
        cout << "yes";
    else
        cout << "no";
    return 0;

}

