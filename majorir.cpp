
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>

using namespace std;


int main(){
    map<string, int> biba;

    string m = "";
    int n = 0;

    vector <string> unique = {};
    cout << "введите количество элеиентов ";
    cin >> n;

    int prov = 0;
    if(n % 2 == 1){
        prov = n/2 + 1; 
    }else{
        prov = n;
    }

    
    for(int i = 0; i < n; i++){
        cout << "введите элемент ";
        cin >> m;
        if(biba[m] == 0){
            biba[m] = 1;
            unique.push_back(m);
        }else{
           biba[m] = biba[m] + 1;
        }
    }
    int bul = 0;
    for(int j = 0; j < unique.size(); j++){
        if(biba[unique[j]] >  prov){
            cout << unique[j] << " - Милорд, вот причина опустешей казны" ;
            bul = 1;
            j = unique.size();
        }
    }
    if(bul == 0){
        cout << "Милорд, мы не знаем почему пустеет казна";
    }
}


