#include <iostream>

namespace BestComImp{
    void SimpleFunc(void){
        std::cout<<"BestCom이 정의한 함수"<<std::endl;
    }
}
namespace ProgComImp{
    void SimpleFunc(void){
        std::cout<<"ProgCom이 정의한 함수"<<std::endl;
    }
}
int main(){
    BestComImp::SimpleFunc();
    ProgComImp::SimpleFunc();
    return 0;
}
