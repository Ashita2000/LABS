#include <iostream> 
#include <pthread.h> 
#include <semaphore.h> 
#include <random> 
#include <unistd.h> 
using namespace std; 
#define BUFFER_SIZE 10 
int buffer[BUFFER_SIZE]; 
int index=0; 
sem_t full,empty; 
pthread_mutex_t mutex; 

void* myTurn(void* arg){  
    while(1){   
        sleep(1);
        cout<<"\nMy Turn"; 
        } 
        
    return;
} 

void* yourTurn(void* arg){  
    while(1){   
        sleep(1);
        cout<<"\nYour Turn"; 
        } 
        
    return;
} 

int main(){
    pthread 
}