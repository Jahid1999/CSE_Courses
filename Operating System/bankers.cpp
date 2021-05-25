#include<bits/stdc++.h>
#define total_processes 5
#define total_resource_number 3

using namespace std;
  
void bankersAlgorithm(int processes[], int available[],
					  int maximum[][total_resource_number],
                      int allocated[][total_resource_number]) {
                      
    int resource_need[total_processes][total_resource_number];
    bool finish[total_processes] = {false};
    int safe_state_squence[total_processes];
    int count = 0;
    
    for (int i = 0 ; i < total_processes ; i++) {
    	for (int j = 0 ; j < total_resource_number ; j++){
    		resource_need[i][j] = maximum[i][j] - allocated[i][j];
    	}           
    }

    int temp[total_resource_number];
    
    for (int i = 0; i < total_resource_number ; i++) {
        temp[i] = available[i];
  	}
  	
    while (total_processes > count) {

        bool found = false;
        for (int i = 0; i < total_processes; i++) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < total_resource_number; j++) {
                	if (resource_need[i][j] > temp[j])
                        break;
                }
                   
                if (j == total_resource_number) {
                    for (int k = 0 ; k < total_resource_number ; k++) {
                    	temp[k] += allocated[i][k];
                    }
                    
                    finish[i] = true;
                    found = true;  
                    safe_state_squence[count++] = i;
                }
            }
        }
        if (!found) {
            cout << "This usage scenario is not in safe state" << endl;
            return;
        }
    }

    cout << "This usage scenario is in safe state" << endl << "Safe state sequence: ";
    
    for (int i = 0; i < total_processes ; i++) {
    	cout << safe_state_squence[i] << " ";  
    }
  	cout << endl;
  	
    return;
}
  
int main(void) {

    int processes[] = {0, 1, 2, 3, 4};
    int available_resource[] = {3, 3, 2};

    int maxmimum[5][total_resource_number] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
    int allocated[5][total_resource_number] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
  
    bankersAlgorithm(processes, available_resource, maxmimum, allocated);
  
    return 0;
}

