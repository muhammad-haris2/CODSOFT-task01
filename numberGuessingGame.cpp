#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    int num, num1;
    srand(time(0));
    num = rand()%100;  //num is the random generated number
    cout<<"Guess a number from 1 to 100"<<endl;
    cout<<"Enter your guess number :";
    cin>>num1;   //num1 is the number entered by the user

    bool flag = true;
    do{
        if(num1<num){
            cout<<"The number you guessed is less"<<endl;
            cin>>num1;
        }
        else if(num1>num){
            cout<<"The number you guessed is high"<<endl;
            cin>>num1;
        }
        else if(num1==num){
            cout<<"The number you guessed is correct"<<endl;
            flag = false;
        }

    }
    while(flag==true);
    cout<<"Hello"<<endl;
    return 0;
}
