/*
*
*
*
*
*
*/

#include "../sorted.h"
using namespace std;

//
//
//


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
template <class Tem>
void quick_sorte(Tem& arr, int first, int end, bool PX = false){
  int i = first, j = end;
  auto flag = arr[first];
  if ( first < end ){
    while ( i < j ){
      if ( !PX )   {
        while ( i < j && arr[j] > flag ) j--;
        while ( i < j && arr[i] <= flag ) i++;
      } else {
        while ( i < j && arr[j] < flag ) j--;
        while ( i < j && arr[i] >= flag ) i++;
      }
      if( i < j ){
        auto te = arr[i];
        arr[i] = arr[j];
        arr[j] = te;
      }
    }

    auto tttt = arr[first];
    arr[first] = arr[j];
    arr[j] = tttt;
    quick_sorte(arr, first, j - 1,  PX);
    quick_sorte(arr, j + 1, end,  PX);
  }
  else{
    return ;
  }
}
