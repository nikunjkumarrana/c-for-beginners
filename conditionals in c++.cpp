#include<iostream>
using namespace std;
int main(){
    //if-else statement
    cout<<"if-else statement output"<<endl;
    int cp,sp;
    cout<<"cost price:";
    cin>>cp;
    cout<<"selling price:";
    cin>>sp;
    if (cp>sp)//if this statement is true it will excute the code otherwise it will move forward
    {
        cout<<"loss="<<cp-sp<<endl;
    
    }
    else if (cp==sp)//if this statement is true it will excute the code otherwise it will move forward
    {
        cout<<"no loss no profit"<<endl;
    }
    else//if both the above statement is false then it will execute this statement
    {
        cout<<"profit="<<sp-cp<<endl;
    }
    cout<<endl;
    //conditonal statement
    cout<<"conditonal statement output"<<endl;
    int num,storingNumber;
    cout<<"Enter the number:";
    cin>>num;
    storingNumber=num>=0? 1 :0;//if the conditon is true it will excute 1 otherwise it will excute 0
    cout<<storingNumber<<endl;
    cout<<endl;
    //
    int arthemeticOperator,num1,num2;
    cout<<"enter the 1st number:";
    cin>>num1;
    cout<<"enter the 2st number:";
    cin>>num2;
    cout<<"Enter the operator(*,+,-,/,%):";
    cin>>arthemeticOperator;
    switch (arthemeticOperator)
    {
    case ('*'):
        cout<<num1*num2<<endl;
        break;
    case ('/'):
        cout<<num/num2<<endl;
        break;
    case ('+'):
        cout<<num1+num2<<endl;
        break;    
    case ('-'):
        cout<<num1-num2<<endl;
        break;
    case ('%'):
        cout<<num1%num2<<endl;
        break;    
    default:
    cout<<"Error"<<endl;//if non of the above statement will execute then it will execute this statement
        break;
    }
    

    return 0;
}