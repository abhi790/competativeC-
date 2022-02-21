#include<bits/stdc++.h>
using namespace std;



//C++ competative programming
//Topic : datatype overflow and calculation is done in higher datatype


//Utility function to calculate the necessary calculation or printing
//Template function for printing the variable of all datatype in single function
template<typename G>
void _printVar(G val){
    cout << val << endl;
}
//type A will higher datatype
template<typename A, typename B>
A add(A a, B b){
    return a + b;
}
//A and B must be a no
template<typename A, typename B>
A mul(A a, B b){
    return a * 1LL * b;
}
//above this the utility function are defined
///// ---------------------  ///              


//Concept of the program used

//First concept
//calculation is done in higher order datatype
void firstConcept(){
    //arithmetic action of different datatype
    // addition of double and int result into double(higher datatype)
    //addition of 5.5 and +5 result into 10.5(higher datatype double)
    cout << add(5.5, 5) << endl;
    //addition of int and char result into int
    // the ascii value of 'a' is 97 and +5 result into 102(higer datatype int)
    cout << add(5, 'a') << endl;

    //addtion of double and char
    //addition of 5.56 and +97(ascii value of char 'a') result into 102.56(higher datatype double)
    cout << add(5.56, 'a')<<endl;
}

//Second concept
//integer, long and long long range 
void secondConcept(){
    //integer range
    int a = INT_MAX; //roughly (-10^9 to +10^9) 
    int b = INT_MAX; 
    cout << a * 1LL * b <<endl; //1LL to avoid integer overflow while calculation

    //long range
    long a1; //roughly (-10^12 to +10^12)
    long b1;
    // cin >> a1 >> b1;
    // cout << a1 * b1<<endl; 

    //long long range
    long long a2;
    long long b2;
    cin >> a2 >> b2;
    cout << a2 * b2;
}

//Third concept
//double precision and calculations
void thirdConcept(){
    double a = 100000000000; //losses accuracy after 10^22 result
    double b = 100000000000;
    double c = a * b;
    cout << c <<endl; //gives scientific notation
    cout << fixed << c <<endl; //remove scientific notation but value present after decimal point
    cout << fixed << setprecision(0) << c << endl; //remove value after decimal point
}

//Calculate the multiplication of two no(can be int,long long)
void oneQuestion(){
    int a = 5; //
    int b = 10; //higest value can be used
    cout << a * b<<endl; //overflow if a = 1000000000 and b = 1000000000  
    cout << a * 1LL * b <<endl; //avoid overflow while calculation and storage
    //you can also declare a and b as long long int to avoid overflow after calculations
}

//main function
int main(){
    // firstConcept();
    // secondConcept();
    // thirdConcept();
    //one question to calculate multiplication of two no
    // oneQuestion();
    return 0;
}




