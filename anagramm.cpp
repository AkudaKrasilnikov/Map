
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>

using namespace std;


int main(){
    map<char, int> biba;
    map<char, int> boba;
    
    string odan = "";
    string dwa = "";

    cout << "Введите строку 1 ";
    cin >> odan;
    cout << "Введите строку 2 ";
    cin >> dwa;    

    int n = odan.size();
    int n2 = dwa.size();

    vector<char> uni1 = {};
    vector<char> uni2 = {};

    if(n != n2){
        cout << "Милорд, у этих 2 строк разное кол-во символов.";
    }else{
        for(int i = 0; i < n; i++){
            if(biba[odan[i]] == 0){
                biba[odan[i]] = 1;
                uni1.push_back(odan[i]);
            }else{
                biba[odan[i]] = biba[odan[i]] + 1;
            }

            if(boba[dwa[i]] == 0){
                boba[dwa[i]] = 1;
                uni2.push_back(dwa[i]);
            }else{
                boba[dwa[i]] = boba[dwa[i]] + 1;
            }
        }
    
    int bul = 0;
    if(uni1.size() != uni2.size()){
        cout << "Милорд, кол-во уникательных элементов этих строк различается.";
    }else{
        
        for(int i = 0; i < uni1.size(); i++){
            if(biba[odan[i]] != boba[odan[i]]){
                bul += 1;
            }
            if(biba[dwa[i]] != boba[dwa[i]]){
                bul += 1;
            }
        }
        
        if(bul == 0){
        cout << "Милорд, Вы как всегда были правы, что эти 2 строки являются анаграммами.";
        }else{
        cout << "Милорд, вы были близки, но сторки не являются анараммами.";
    }
    }
    }
    
}


