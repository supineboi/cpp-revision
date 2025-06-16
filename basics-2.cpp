#include<iostream>
using namespace std;

int sum2Numbers(int a, int b, int c = 34){ // default at last
    return a + b;
}

#define sum2Numbers(x,y) x - y // maros

int sameVar = 18;

int main(){
    // ** Jump Statements **
    level1:
    cout<<"back to level 1"<< endl;
    // goto level1; // not recommend to use

    // ** If else **
    int num = 4;
    if(num == 2 ){
        cout<<"Number is equal to 2"<<endl;
    } else {
        cout<<"Number is not equal to 2"<<endl;
    }

    // ** Loop **
    for(int i=0; i<5; i++){
        cout<<"value of i :"<<i<< endl; 
    }

    // ** While Loop **
    int j = 0;
    while(j == 14){
        cout<<"Incrementing value of j"<< endl;
        j += 7;
    }

    // ** Do While Loop **
    do{
        cout<<"Starting do while loop"<< endl;
    } while (j == 14);

    // ** Functions **
    int result = (sum2Numbers)(7,7); // add () if function name conflict with marco fun name 
    cout<<"result of sum : "<<result<< endl;

    // automatic determination of type
    auto anyType = 'c';
    cout<<"Any Type variable value (char):"<<anyType<<endl;
    cout<<"Any Type variable value sizeof(char):"<<sizeof anyType<<endl;
    
    int sameVar = 8;
    cout<<"Scope resolution ::"<<::sameVar<<endl;

    // ** Example Output **
    /*
        back to level 1
        Number is not equal to 2
        value of i :0
        value of i :1
        value of i :2
        value of i :3
        value of i :4
        Starting do while loop
        result of sum : 14
        Any Type variable value (char):c
        Any Type variable value sizeof(char):1
        Scope resolution ::18
    */
    
    return 0;
}