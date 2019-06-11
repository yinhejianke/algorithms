#include "../cpp/sorted.h"
#include "../cpp/sorted/sorted.cpp"

using namespace std;
void Sort(){
  vector<int> a = {2,2,2, 333,555 ,4,33,53 ,77 ,56};

  vector<int> cc = sorted(a);
  for(int i = 0; i < cc.size(); i++){

     cout << "cc: " << i << ":  " << cc[i] << endl;
  }

  vector<int> tt = sorted(a, true);
  for(int i = 0; i < tt.size(); i++){

     cout << "cc: " << i << ":  " << tt[i] << endl;
  }

  quick_sorte(a, 0, a.size() - 1 , true);
  cout << "size: " << a.size() << endl;
  for(int i = 0; i < a.size(); i++){

      cout << "aa" << i << ": " << a[i] << endl;
  }
  quick_sorte_two(a, 0, a.size() - 1 );
  cout << "size: " << a.size() << endl;
  for(int i = 0; i < a.size(); i++){

      cout << "aa" << i << ": " << a[i] << endl;
  }
}

int main(){

    Sort();
    return 0;
}
