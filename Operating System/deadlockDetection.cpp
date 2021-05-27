#include<bits/stdc++.h>
#define total_processes 5
#define total_resource_number 3

using namespace std;
  
void deadlockDetectionAlgorithm(int processes[], int available[],
					  int request[][total_resource_number],
                      int allocated[][total_resource_number]) {
                      
    int resource_need[total_processes][total_resource_number];
    bool finish[total_processes] = {false};
    int safe_state_squence[total_processes];
    int count = 0;
    
    for (int i = 0 ; i < total_processes ; i++) {
    	int tr = 0;
    	for (int j = 0 ; j < total_resource_number ; j++){
    		tr += allocated[i][j];
    	} 
    	if(tr==0)
    		finish[i] = true;          
    }

    int temp[total_resource_number];
    
    for (int i = 0; i < total_resource_number ; i++) {
        temp[i] = available[i];
  	}
  	
   for(int tp=0; tp < total_processes; tp++) {
        bool found = false;
        for (int i = 0; i < total_processes; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < total_resource_number; j++) {
                	if (request[i][j] > temp[j]) {
                		found = true;
                		break;
                	}
                     
                }
                
                if(!found)
                {
                    safe_state_squence[count++] = i;
                    for (int k = 0 ; k < total_resource_number ; k++) {
                    	temp[k] += allocated[i][k];
                    }                 
                    finish[i] = true;
                }
                 
            }
        }
        
    }
    
	if(count != total_processes) {
       cout << "Deadlock detected!" << endl;
    }
    else {
    	cout << "This usage scenario is not in deadlock" << endl;
    }
  	
    return;
}
  
int main(void) {

    int processes[] = {0, 1, 2, 3, 4};
    int available_resource[] = {0, 0, 0};

    int request[5][total_resource_number] = {{0, 0, 0}, {2, 0, 2}, {0, 0, 1}, {1, 0, 0}, {0, 0, 2}};
    int allocated[5][total_resource_number] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 3}, {2, 1, 1}, {0, 0, 2}};
  
    deadlockDetectionAlgorithm(processes, available_resource, request, allocated);
  
    return 0;
}

