#include <iostream>

namespace BestComImp{
    void SimpleFunc(void);
}
namespace BestComImp{
    void PrettyFunc(void);
}
namespace ProgComImp{
    void SimpleFunc(void);
}

int main(){
    BestComImp::SimpleFunc();
    return 0;
}

void BestComImp::SimpleFunc() {
    std::cout<<"BestCom이 정의한 함수"<<std::endl;
    PrettyFunc(); //같은 이름 공간
    ProgComImp::SimpleFunc(); //다른 이름 공간
}

void BestComImp::PrettyFunc() {
    std::cout<<"So Pretty!"<<std::endl;
}

void ProgComImp::SimpleFunc() {
    std::cout<<"ProgCom이 정의한 함수"<<std::endl;
}