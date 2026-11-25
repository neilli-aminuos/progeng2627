#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");
    int summ = 0;
    if(infile.is_open()){ 
        int tmp;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)
        while(infile >> tmp){
            std::cout << tmp << std::endl;
            summ += tmp;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
    std::cout<<"The sum in taxt file is "<< summ << std::endl;
}
