#include <iostream>
#include <fstream>
#include <string> 
#include <array>
#include <iterator> 
#include <algorithm>
#include<bits/stdc++.h> 

using namespace std; 

bool compare_first_char_string(const string &adj, const string &animal, int char_num){
		int adj_len = adj.size();
		int ani_len = animal.size();
			
		if(adj_len < char_num || ani_len < char_num) return false;
		

		for(int i = 0; i < char_num; i++){
			//cout << adj[i]  <<" - " << animal[i]	<< endl;
			if(adj[i] != animal[i]){
				 return false;
			}else{
				//cout << "it is equal" << endl;
			}
		}
	

	return true; 

} 


int main(){
	
	set<string> adjs;
	set<string> animals;
	string str;
	int chars_num = 4;

	//read adjetives from file into array
	ifstream adjfile("adjectives.txt");
	while(getline(adjfile, str)){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		 adjs.insert(str);
	}
	
	//read animal list into animal array
	ifstream animalfile("animal_list.txt");
	while(getline(animalfile, str)){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		 animals.insert(str);
	}


	for(auto adj : adjs){
		for(auto animal : animals){

			if(compare_first_char_string(adj, animal, chars_num)) cout << adj <<  " - " << animal << endl;
		}
	} 	


	return 1;

}
