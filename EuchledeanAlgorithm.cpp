#include<bits/stdc++.h>
//it is my comment
//
#include <iostream>
using namespace std;

int EuchledeanAlgorithm(int ae,int be)
{
    if(be==0)
    return ae;
    else 
    {
         return EuchledeanAlgorithm(be,ae%be);
    }
}
//using mod property

int main() {
    int ae=4,be=6,resr;
    resr = EuchledeanAlgorithm(ae,be);
    cout<<resr<<endl;
    return 0;
}
