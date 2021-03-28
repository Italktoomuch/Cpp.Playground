#include <iostream>
#include <vector>
using namespace std;

/*
	Write a function SwapVectorEnds() that swaps the first and last elements of its vector parameter. Ex: sortVector = {10, 20, 30, 40} becomes {40, 20, 30, 10}. The vector's size may differ from 4. 
*/

void SwapVectorEnds(vector<int>& sortVector){
   int TempVal;
   
   TempVal = sortVector[0];
   sortVector[0] = sortVector[(sortVector.size() - 1)];
   sortVector[(sortVector.size() - 1)] = TempVal ;
   }

int main() {
   vector<int> sortVector(4);
   int i = 0;

   sortVector.at(0) = 10;
   sortVector.at(1) = 20;
   sortVector.at(2) = 30;
   sortVector.at(3) = 40;

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
