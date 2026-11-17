#include<iostream>
#include<vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    int n1 = vin1.size();
    int n2 = vin2.size();
    for(int i = 0; i< n1+n2; i++){
        if(i<n1){
            vout.push_back(vin1.at(i));
        }else{
            vout.push_back(vin2.at(i-n1));
        }
    }
    for(int i = 0; i < n1+n2; i++){
        std::cout<<vout.at(i)<<std::endl;
    }
    
}


int main(){
    std::vector<int> vin1;
    std::vector<int> vin2;
    std::vector<int> vout;
    std::cout<<"number of elements in vin1"<<std::endl;
    int n;
    std::cin>>n;
    for(int i = 1; i <= n; i++){
        int tmp;
        std::cout<<"Please enter in vin1"<<std::endl;
        std::cin>>tmp;
        vin1.push_back(tmp);
    }
    std::cout<<"number of elements in vin2"<<std::endl;
    std::cin>>n;
    for(int i = 1; i <= n; i++){
        int tmp;
        std::cout<<"Please enter in vin2"<<std::endl;
        std::cin>>tmp;
        vin2.push_back(tmp);
    }
    std::cout<<"The output vector is"<<std::endl;
    append_vectors(vin1,vin2,vout);
    return 0;
}