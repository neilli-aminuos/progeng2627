#include<iostream>
#include<vector>
#include<cstdlib>
#include<fstream>
#include<string>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i = 0; i < vin.size(); i++){
        if(s == vin.at(i)){
            return i;
        }
    }
    return -1;
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1.at(i),vout) == -1){
            vout.push_back(vin1.at(i));
        }
    }
    for(int i = 0; i < vin2.size(); i++){
        if(search_vector(vin2.at(i),vout) == -1){
            vout.push_back(vin2.at(i));
        }
    }

    std::ofstream outfile;
    outfile.open("union.txt");

    if(!outfile.is_open()){
        std::cout<<"error opening the file"<<std::endl;
        return ;
    }

    for(int i = 0; i < vout.size(); i++){
        outfile << vout.at(i) << std::endl;
    }

    outfile.close();
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        if(search_vector(vin1.at(i),vin2) != -1 && search_vector(vin1.at(i),vout) == -1){
            vout.push_back(vin1.at(i));
        }
    }
    std::ofstream outfile;
    outfile.open("intersection.txt");

    if(!outfile.is_open()){
        std::cout<<"error opening the file"<<std::endl;
        return ;
    }

    for(int i = 0; i < vout.size(); i++){
        outfile << vout.at(i) << std::endl;
    }

    outfile.close();
}

int main(){
    std::string inputfilename;
    std::cout<<"please enter the first input filename"<<std::endl;
    std::cin >> inputfilename;

    std::ifstream infile1;
    infile1.open(inputfilename);
    
    if(!infile1.is_open()){
        std::cout<<"error opening the file"<<std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> v1;
    
    while(infile1>>tmp){
        v1.push_back(tmp);
    }

    infile1.close();
    
    std::cout<<"please enter the second input filename"<<std::endl;
    std::cin >> inputfilename;

    std::ifstream infile2;
    infile2.open(inputfilename);
    
    if(!infile2.is_open()){
        std::cout<<"error opening the file"<<std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v2;
    
    while(infile2>>tmp){
        v2.push_back(tmp);
    }

    infile2.close();
    std::vector<std::string> vout;

    union_vector(v1,v2,vout);
    
    intersection_vector(v1,v2,vout);
    
    return 0;
}