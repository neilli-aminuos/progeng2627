#include<iostream>
#include<vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin.at(i) < t){
            vout.push_back(vin.at(i));
        }
    }
    std::cout<<"The filtered vector is"<<std::endl;
    for(int i = 0; i < vout.size(); i++){
        std::cout<<vout.at(i)<<std::endl;
    }
}
int main(){
    double n;
    std::vector<double> v1;
    int z = 0;
    std::cout<<"Please enter the filter value n"<<std::endl;
    std::cin>>n;
    std::cout<<"Please enter number of elements in vector"<<std::endl;
    std::cin>>z;
    for(int i = 1; i <= z; i++){
        double tmp;
        std::cout<<"Please enter elements in vector"<<std::endl;
        std::cin>>tmp;
        v1.push_back(tmp);
    }
    std::vector<double> vout;
    vout.clear();
    filter_v(v1,n,vout);
    return 0;
}