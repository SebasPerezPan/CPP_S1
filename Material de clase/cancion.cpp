// writing on a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream myfile2("letra.txt");
    char * c;
    char * token;
    if (myfile2.is_open())
    {
        while (getline(myfile2, line))
        {
            c = const_cast<char *>(line.data());
            //Cambiamos la estructura de c. El * funciona como un 
            token = strtok(c, " ");
            string a = ("a");
            //string tokenizer divide la cadena por el caracter que coloquemos.
            while (token != NULL){
                string tkn(token);
                if(tkn.find(a) != std::string::npos){
                    cout<<tkn<<endl;
                }
                token = strtok(NULL, " ");
            }
        }
        myfile2.close();
    }

    else cout << "Unable to open file2";



    return 0;
}
