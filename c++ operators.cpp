#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter 1st no:";
    cin>>num1;//taking input num1 
    cout<<endl;
    cout<<"Enter 2nd no:";
    cin>>num2;//taking input num2
    cout<<endl;
    //arthemetic operators
    cout<<"arthemetic operators output"<<endl;
    cout<<num1+num2<<endl;//additon
    cout<<num1-num2<<endl;//subtraction
    cout<<num1*num2<<endl;//multiplication
    cout<<num1/num2<<endl;//division
    cout<<num1%num2<<endl;//modulu
    cout<<endl;
    //relational operators
    cout<<"relational operators output"<<endl;
    cout<<(num1==num2)<<endl;//is equal to
    cout<<(num1!=num2)<<endl;//not equals to
    cout<<(num1>num2)<<endl;//less than
    cout<<(num1<num2)<<endl;//greater than
    cout<<(num1>=num2)<<endl;//less than or equal to
    cout<<(num1<=num2)<<endl;//greater than or equal to
    cout<<endl;
    //logical operators
    cout<<"logical operators output"<<endl;
    bool exp1=true;
    bool exp2=false;
    cout<<(exp1&&exp2)<<endl;//logical and
    cout<<(exp1||exp2)<<endl;//logical or
    cout<<(!exp1)<<endl;//logical not
    cout<<(!exp2)<<endl;//logical not
    cout<<endl;
    //assignement operators
    cout<<"assignement operators output"<<endl;
    int num3;
    cout<<"Enter a number:";
    cin>>num3;//taking input num3
    num1=num2;//assinging the value of num1 to num2
    cout<<num1<<endl;
    num1+=num3;//adding 3 in num1
    cout<<num1<<endl;
    num2-=num3;//subtracting 2 from num2
    cout<<num2<<endl;
    num1*=num3;//multiple 3 in num1
    cout<<num1<<endl;
    num2/=num3;//divide 2 from num2
    cout<<num2<<endl;
    num1%=num3;//obtaining remainder when num1 is divided by 3
    cout<<num1<<endl;
    cout<<endl;
    //bitwise complement
    cout<<"bitwise complement output"<<endl;
    cout<<"Enter 1st no:";
    cin>>num1;//taking input num1 
    cout<<endl;
    cout<<"Enter 2nd no:";
    cin>>num2;//taking input num2
    cout<<endl;
    cout<<"Enter a number:";
    cin>>num3;//taking input num3
    cout<<~(num1)<<endl;//bitwise complement
    cout<<((num1)<<num3)<<endl;//left shift
    cout<<((num1)>>num3)<<endl;//right shift
    cout<<(num1&num2)<<endl;//bitwise and
    cout<<(num1|num2)<<endl;//bitwise or
    cout<<(num1^num2)<<endl;//bitwise exclusive or
    cout<<endl;
    //misc operators
    cout<<"misc operators output"<<endl;
    int a;
    int b;
    cout<<"Enter 1st no:";
    cin>>a;//taking input a
    cout<<endl;
    cout<<"Enter 2nd no:";
    cin>>b;//taking input b
    cout<<endl;
    cout<<sizeof(a)<<endl;//sizeof
    bool flag;
    a==b?flag=true:flag=false;
    cout<<flag<<endl;//conditonal operator
    cout<<float(a)<<endl;//casting operator
    cout<<(&a)<<endl;//address operator
    //unary operator
    cout<<"unary operators output"<<endl;
    cout<<"Enter 1st no:";
    cin>>a;//taking input a
    cout<<endl;
    cout<<"Enter 2nd no:";
    cin>>b;//taking input b
    cout<<endl;
    cout<<a++<<"  "<<a<<endl;//post-incrementer 
    cout<<b--<<"  "<<b<<endl;//post-decrementer
    cout<<++a<<endl;//pre-incrementer 
    cout<<--b<<endl;//pre-decrementer
    return 0;
}