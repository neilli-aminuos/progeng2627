#include<iostream>
#include<vector>
#include<fstream>
#include<cstdlib>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int i = 0;
    int j = 0;
    while(true){
        if(v1.at(i) < v2.at(j) && i <= v1.size()-1){
            merged.push_back(v1.at(i));
            i++;
        }else if(v1.at(i) >= v2.at(j) && j <= v2.size()-1){
            merged.push_back(v2.at(j));
            j++;
        }
        if(i == v1.size() ){
            for(j;j < v2.size();j++){
                merged.push_back(v2.at(j));
            }
            break;
        }else if( j == v2.size()){
            for(i;i < v1.size(); i++){
                merged.push_back(v1.at(i));
            }
            break;
        }
    }
    return ;
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for(int i = 0; i< out.size(); i++){
            std::cout<<out.at(i)<<std::endl;
        }
    }

    v1.clear();
    v2.clear();
    expected_output.clear();
    v1 = {1,3,5,7,9};
    v2 = {2,4,6,8,10};
    expected_output = {1,2,3,4,5,6,7,8,9,10};
    merge_vectors_int(v1,v2,out);
    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for(int i = 0; i< out.size(); i++){
            std::cout<<out.at(i)<<std::endl;
        }
    }
    v1.clear();
    v2.clear();
    expected_output.clear();
    v1 = {11,13,15,17,19};
    v2 = {12,14,16,18,20};
    expected_output = {11,12,13,14,15,16,17,18,19,20};
    merge_vectors_int(v1,v2,out);
    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for(int i = 0; i< out.size(); i++){
            std::cout<<out.at(i)<<std::endl;
        }
    }

    return 0;
}