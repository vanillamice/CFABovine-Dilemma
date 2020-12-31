#include <iostream>

using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    for(int i = 0; i < testcase; i++){
        int numberOfTrees;
        cin >> numberOfTrees;
        int trees[51];
        for(int j = 0; j < numberOfTrees; j++){
          cin >> trees[j]; 
        }
        /* solution */
        bool areaExist[51] = {false};
        int counter = 0;
        for(int j = numberOfTrees - 1; j >= 0; j--){
            /*store areas and check if they're unique. */
            for(int k = j - 1; k >= 0; k--) {
              int area = trees[j]-trees[k];
              if(areaExist[area] == false)
                counter++;
              areaExist[area] = true;
            }  
        } 
      cout << counter << endl;  
    }
return 0;
}