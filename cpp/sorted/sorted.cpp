/*
*
*
*
*
*
*/

#include "../sorted.h"
using namespace std;


// 冒泡 排序， 顺序与倒序 /
template <class Tem>
Tem sorted(Tem array, int PX = 1){
    if (PX == 1){
      for(int index = 0 ; index < array.size(); index++){
        for (int another = 0; another < array.size(); another++){
          if (array[index] > array[another]){
            auto Temp = array[another];
            array[another] = array[index];
            array[index] = Temp;
          }

        }
      }
    } else {
      for(int index = 0 ; index < array.size(); index++){
        for (int another = 0; another < array.size(); another++){
          if (array[index] < array[another]){
            auto Temp = array[another];
            array[another] = array[index];
            array[index] = Temp;
          }

        }
      }
    }
  return array;
}

//快速排序
// template <class Tem>
// Tem quick_sorted (Tem T, )
