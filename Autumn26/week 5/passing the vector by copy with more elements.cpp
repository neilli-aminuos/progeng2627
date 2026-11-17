#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    std::cout<<"please enter how many elements you want to store"<<std::endl;

    int n;
    
    if(!(std::cin>>n)){
        std::cout<<"Type error";
        return 0;
    }

    for(int i = 1; i <= n; i++){
        int c = 0;
        if(!(std::cin>>c)){
            std::cout<<"Type error";
            return 0;
        }
        v.push_back(c);
    }

    
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}