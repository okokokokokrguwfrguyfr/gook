#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int **I;
    I=new int* [5];
    for (int x=0; x<5; x++){
        int p[]={1,2,3,4,5};
        I[x]=p;
    }
    for (int x=0; x<5; x++){
        for (int y=0; y<5; y++){
            cout<<*(*(I+x) +y);
        }
        cout<<'\n';
    }
    for (int x=0; x<5; x++){
        delete I[x];
    }
    delete[] I;
    return 0;
}
