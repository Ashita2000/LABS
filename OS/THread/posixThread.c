#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 
  
// A normal C function that is executed as a thread  
// when its name is specified in pthread_create() 
void *myThreadFun(void *vargp) 
{ 
    sleep(1); 
    printf("My Turn \n"); 
    return NULL; 
} 

void *yourThreadFun(void *vargp) 
{ 
    sleep(1); 
    printf("your Turn \n"); 
    return NULL; 
} 
   
int main() 
{ 
    pthread_t thread_id1;
    pthread_t thread_id2;
    printf("Before Thread\n"); 
    pthread_create(&thread_id1, NULL, myThreadFun, NULL); 
    pthread_create(&thread_id2, NULL, yourThreadFun, NULL); 
    pthread_join(thread_id1, NULL); 
    printf("After Thread\n"); 
    exit(0); 
}

/*
Output :
Before Thread
your Turn 
My Turn 
After Thread



*/