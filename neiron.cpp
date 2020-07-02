/*
This program describes methods neiron ,
it means we describe neiron here .
Author : Michael Elkin
GPL v2.0

2020 year.

*/
#include <iostream>
#include <string>

using namespace std;

class neiron {

public:    
	string neiron_name;
	int priority_neiron;
	int space_of_neiron[100] ={};
	int size_of_first_array = 0;
    string space_of_names[100] = {};
    int size_of_second_array = 0; 

    //condition about error 1
    void coundition_for_space_of_neiron()
    {
    	if(space_of_neiron[100]== 0){
    		cout<<"Error#1!"<<endl;
            cout<<"You have a mistake with space of neiron!"<<endl;

    	}
    }
    

    //add element in matrix for one fig
    void add_element_in_array(){

    	space_of_neiron[size_of_first_array++] ={1};
    	space_of_neiron[size_of_first_array++] ={2};
    	space_of_neiron[size_of_first_array++] ={3};
    	cout<<space_of_neiron[1]<<endl;
    }
    

    //method to pour memory block
    void pour_space_of_memory()
    {   
        int size_of_memory_block;
        cout<< "Enter no more than 100 elements in memory block:";
        cin>>size_of_memory_block;  
        for (int i = 0; i<= size_of_memory_block;i++)
            {   
                int element_of_memory_block;
                cout<<"Enter element of memory block";
                space_of_neiron[i] ={element_of_memory_block};
            }

    }

};

