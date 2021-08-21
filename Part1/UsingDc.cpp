#include <iostream>

using std::cin;
using std::cout;
using std::endl;
// 통틀어서 using namespace std; 하면 됨

namespace Hybrid{
    void HybFunc(){
        cout<<"So simpel function"<<endl;
        cout<<"In namespace Hybrid"<<endl;
    }
}

int main(){
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}

