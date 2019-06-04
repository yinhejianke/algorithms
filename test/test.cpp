#include "../cpp/sorted.h"
#include "../cpp/sorted/sorted.cpp"

using namespace std;

int main(){

    vector<int> a = {2,2,2, 333,555 ,4,33,53 ,77 ,56};
    //vector<int> cc = sorted(a);
    //for(int i = 0; i < cc.size(); i++){

    //    cout << "cc: " << i << ":  " << cc[i] << endl;
    //}

    quick_sorte(a, 0, a.size() - 1 );
    cout << "size: " << a.size() << endl;
    for(int i = 0; i < a.size(); i++){

        cout << "aa" << i << ": " << a[i] << endl;
    }
    return 0;
}
