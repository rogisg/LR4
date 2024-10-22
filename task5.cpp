//задача 5
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

bool remove_first_negative_element( vector<int>& vec, int& removed_element){
    bool boobs = false;
    removed_element = 0;
    for(int i = 0; i< vec.size();++i){
        auto t = vec.begin();
        if(vec[i]<0){
             removed_element = vec[i];
             vec.erase(t + i);
             boobs = true;
             break;
        }
        
    }
    
    return boobs;

};

int main(){
    int s7airlines;
    vector<int> very = {1, 2, -3, -4};
    cout<<remove_first_negative_element(very,s7airlines)<<endl;
    cout<<"massiv:"<<endl;
    for(int i = 0; i<very.size();++i){
        
        cout<<very[i]<<endl;
    }
    cout<<"deleted element: "<<s7airlines<<endl;
}
