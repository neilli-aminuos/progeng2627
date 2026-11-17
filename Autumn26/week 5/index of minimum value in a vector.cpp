#include<iostream>
#include<vector>
#include<cmath>
int min_vector_element(const std::vector<int>& vin){
    int min = -1;
    if(!vin.empty()){
        min = 0;
    }
    for(int i = 0; i < vin.size(); i++){
        if(vin.at(i) < vin.at(min)){
            min = i;
        }
    }
    return min;
}
int main(){
    std::vector<int> vin = {7,2,3,4,5};
    if(min_vector_element(vin) == -1){
        std::cout<<"the vector is empty";
    }else{
        std::cout<<"the index of the minimum element of the vector is "<<min_vector_element(vin);
    }
    return 0;
}