#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //declare variables
    double diag,side,area;
    int sum1, sum2;

    cout<<"Please enter the side of a sqaure: ";
    cin>>side; 
    cout<<endl;

    cout<<"You entered: "<<side<<endl;

    area =  side * side;
    diag = side*sqrt(2);

    sum1= static_cast<int>(area+0.5);
    sum2= static_cast<int>(diag+0.5);

    cout<<"The area of the square is: "<<sum1<<endl;
    cout<<"The diagonal of the sqaure is: "<<sum2<<endl;



    return 0;
}

/* You entered: 7
The area of the square is: 49
The diagonal of the sqaure is: 10*/