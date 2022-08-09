
#include <iostream>
#include <vector>
#include <ctime>
#include <stdlib.h>
using namespace std;

int postion(vector <int> P){
    int SZ = P.size(),fivety = 50;
        for(int i = 0; i < SZ; i++){
            if (P[i] < fivety){
                return i;
            }
        }
}

int main()
{
    vector <int> Numbers;
    srand(0);
    const int SZ = 100;
    for (int i= 0; i < SZ; i++){
        int R;
        R = rand()%100 + 1;
        Numbers.push_back(R);
    }
        for (const int i : Numbers){
            cout << i << " ";
        }
     cout << postion(Numbers);
    return 0;
}
