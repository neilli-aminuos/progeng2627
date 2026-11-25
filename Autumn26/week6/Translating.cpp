#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<vector>

int check(std::string a, const std::vector<std::string>& b){
    for(int i = 0; i < b.size(); i++ ){
        if(a == b.at(i)){
            return i+1;
        }
    }
    return -1;
}

int main(){
    std::vector<std::string> ad;
    std::cout<<"please enter the name of the advertisement"<<std::endl;
    std::string name_ad;
    std::getline(std::cin, name_ad);
    std::ifstream inad;
    inad.open(name_ad);
    if(!inad.is_open()){
        std::cout<<"error opening advertisement"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(inad>>tmp){
        ad.push_back(tmp);
    }
    
    inad.close();

    std::vector<std::string> tr;
    std::cout<<"please enter the name of the translation"<<std::endl;
    std::string name_tr;
    std::getline(std::cin, name_tr);
    std::ifstream intr;
    intr.open(name_tr);
    if(!intr.is_open()){
        std::cout<<"error opening translation"<<std::endl;
        return EXIT_FAILURE;
    }

    while(intr>>tmp){
        tr.push_back(tmp);
    }
    
    intr.close();
    
    std::vector<std::string> ans;

    for(int i = 0; i < ad.size(); i++){
        if(check(ad.at(i),tr) != -1){
            ans.push_back(tr.at(check(ad.at(i),tr)));
        }else{
            ans.push_back(ad.at(i));
        }
    }
    for(int i = 0; i < ans.size(); i++){
        std::cout<<ans.at(i) << "\t";
    }
    return 0;
}