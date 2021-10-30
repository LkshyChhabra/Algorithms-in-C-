// naive approach is to find the minimum of the two numbers and keep trying smaller smaller numbers
// Also to find the lcm use gcd to calculate it i.e. lcm=a*b/gcd

#include <iostream>
using namespace std;

int EuchledeanAlgorithm(int ac,int bd)
{
    if(bd==0)
    return ac;
    else 
    {
         return EuchledeanAlgorithm(bd,ac%bd);
    }
}

int main() {
    int ac=4,bd=6,resr;
    resr=EuchledeanAlgorithm(ac,bd);
    cout<<resr<<endl;
    return 0;
}
