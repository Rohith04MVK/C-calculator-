#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() 
{ 

    unordered_map<string, int> umap; 
  

    umap["Pepperoni"] = 200; 
    umap["Plain"] = 150; 
    umap["Cheesy"] = 170; 

    for (auto x : umap) 
      cout << i.first << " " << i.second << endl; 
  
} 