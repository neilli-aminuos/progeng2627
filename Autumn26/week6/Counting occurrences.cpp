#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<fstream>

int main(){
    std::vector<std::string> t;

    std::ifstream opentext;

    opentext.open("text.txt");

    if(!opentext.is_open()){
        std::cout<< "error opening the text";
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(opentext>>tmp){
        t.push_back(tmp);
    }
    opentext.close();

    std::vector<std::string> w;

    std::ifstream openword;
    openword.open("words.txt");
    if(!openword.is_open()){
        std::cout<<"error opening the word";
        return EXIT_FAILURE; 
    }
    while(openword>>tmp){
        w.push_back(tmp);
    }

    openword.close();

    std::vector<int> ans(w.size(),0);
    for(int i = 0; i < w.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(w.at(i) == t.at(j)){
                ans.at(i)++;
            }
        }
    }
    for(int i = 0; i < w.size(); i++){
        std::cout<<w.at(i)<<": "<<ans.at(i)<<std::endl;
    }
    return 0;
}