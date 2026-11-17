#include<iostream>
#include<vector>
#include<cmath>
void search_vector(int n, const std::vector<int>& vin){
    if(!vin.empty()){
        int flag = 0;
        for(int i = 0; i < vin.size(); i++){
            if(vin.at(i) == n){
                std::cout<<"The value presents at index "<<i<<std::endl;
                flag = 1;
            }
        }
        if(flag == 0){
            std::cout<<"There is no value presents in the vector";
        }
    }else{
        std::cout<<"The vector is empty";
    }
}

int main(){
    std::vector<int> vin = {};
    int n =3;
    search_vector(n,vin);
    return 0;
}