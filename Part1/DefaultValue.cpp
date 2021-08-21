#include <iostream>
//함수선언 main 위에 하면 따로 할 필요 x
//위에 안하고 밑에 할시 main위에서 int Adder(int num1=1

int Adder(int num1=1,int num2=2);

int main(){
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(3)<<std::endl;
    std::cout<<Adder(3,5)<<std::endl;
    return 0;
}

int Adder(int num1 ,int num2){
    return num1+num2;
}