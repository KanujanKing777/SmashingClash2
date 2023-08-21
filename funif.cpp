#include<iostream>
class apple{
    int fun(int a){
        return a*10;
    }
};
int main(){
    apple a;
    cout<<a.fun(10)<<endl;
    return 0;
}