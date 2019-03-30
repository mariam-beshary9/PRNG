#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

double PRNG ( double x )
{

    double y;
    y= ((sin(x)*sin(x)));
	return y ;

}

int main()
{
    double x;
    time_t t ;

    ///Current time
    t = time(NULL);

    /// to make it a quiet small number
    x = (double) t /100000;

    ///Generating numbers
    for(int i=0 ; i<100 ;i++)
    {
        cout<<"The number #"<<i+1<<" is : "<<PRNG ( x )<<endl ;

        ///The equation we used to generate next term from the seed
        x =  PRNG ( x ) *2.5 ;
    }
	return 0;
}
