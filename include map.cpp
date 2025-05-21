
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>

using namespace std;


int main(){
    map<string, string> biba;
    string m = "";
    int n = 0;
    cout << "введите количество строк ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "введите строку ";
        cin >> m;
        if(biba[m] == ""){
            biba[m] = "aboba";
        }else{
            cout << "ААААААА ПОВТОРКА !!!!!";
            i = n;
        }
    }
}


