#include <iostream>
#include <fstream>>

using namespace std;

int main()
{
    int total_node, node1, node2, weight;
    int mat[10][10] = {0};

    ifstream input("input.txt");

    if(input.is_open()){
       cout<<"File Open\n";
    input>>total_node;

    while(input>>node1>>node2>>weight){
            mat[node1][node2] = weight;

    }
    ofstream output("output.txt");
    if(output.is_open()){
       cout<<"File Created\n";

       for(int i = 1; i<=total_node; i++){
            for(int j = 1; j<= total_node; j++)
        output<<mat[i][j]<< " ";
       output<<endl;
       }

    }


       }
        else cout<<"File not found\n";

    return 0;
}
