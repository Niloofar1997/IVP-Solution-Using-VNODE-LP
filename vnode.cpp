#include <iostream>
#include "vnode.h"

using namespace vnodelp;
using namespace std;
template<typename var type>

void lorenz (int n, var type *yp, const var type *yinit, var type t, void * param)
{
    
    yp[0]=(-1*(p3+p1) * x[0] + (p2*x[1]))
    yp[1]=(p3*x[0])-(p2*x[1]); 
    
    interval p1(0.2, 0.3);
    const double p2 = 1.9255;
    const double p3 = 0.1451;
    
}

int main()
{
    const int n=2;
    interval t1=0.0 , t2=16.0;
    intervalvector yinit(n);
    yinit[0]=interval(1.0,1.0);
    yinit[1]=interval(0.0,0.0);
    
    AD*ad = new FADBAD AD(n, lorenz, lorenz);
    VNODE * S o l v e r = new VNODE( ad );
    Solver ->integrate(t1, y, t2);
    if (! Solver->successful ())
        cout<<"VNODE-LP could not reach t = "<<t1<<endl;
        cout<<"Solution Enclosure at t= "<<t2<<endl;
        printVector(yinit);
    return 0;
}
