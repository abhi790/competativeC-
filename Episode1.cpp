#include<bits/stdc++.h>

using namespace std;

//C++ competative first lecture
//Template function for printing the variable of all datatype in single function
template<typename G>
void _printVar(G val){
    cout << val << endl;
}
//above code is the template function of all the below print functions commented

// void _printInt(int val){
//     cout << val << endl;
// }

// void _printDoub(double val){
//     cout << val << endl;
// }

// void _printChar(char val){
//     cout << val << endl;
// }

// void _printBool(bool val){
//     cout << val << endl;
// }

//Ascii value printing of any character using a user defined function
void _printAscii(char c){
    cout << (int) c<<endl;
}

//above this there is user defined utility function defination
//----------------------------//---------------------------------//



//functions defined below, in this functions I will modularize 
//-the code to make the code more readable

//first concept 
//taking input and manipulating all the concept
void firstConcept(){
    //type of input
    //char, double, int, float, bool
    int abhimanyu = 345;
    char ch = 'a';
    char ch2 = '5';
    double dole = 23.55;
    bool d = 123;
    bool e = -123;
    bool f = 0;
    string str = " abhidn";
    _printVar(abhimanyu);
    _printVar(ch);
    _printVar(ch2);
    _printVar(dole);
    _printVar(d);
    _printVar(e);
    _printVar(f);
    _printVar(str);


    //Note: template is not in the lecture of the luv bhaiya but I used it to do my work efficiently
    
    //don't need to call different function when you have template function
    // _printInt(abhimanyu);
    // _printChar(ch);
    // _printChar(ch2);
    // _printDoub(dole);
    // _printBool(d);
    // _printBool(e);
    // _printBool(f);
}

//second concept 
//Ascii value printing 
void secondConcept(){
    char c = '6';
    _printVar(c);
    _printVar((int)c);
}

//Third concept 
//cin termination while taking input
void thirdConcept(){
    //cin stop taking input at the "space" and "enter" in normal senario
    //cin behavour is different while taking inputs of characters

    char ch1,ch2,ch3;
    //if the input is 123, then ch1 = 1,ch2 = 2,ch3 = 3
    cin >> ch1 >>ch2 >>ch3;
    //cin is taking only one character and next variable will take the next so on and so forth 
    _printVar(ch1);  // 1
    _printVar(ch2);  // 2
    _printVar(ch3);  // 3
}

int main(){

    // firstConcept();
    // secondConcept();
    // thirdConcept();


    return 0;
}
