#include <iostream>
#include <cstring>
using namespace std;
#include "Queue.h"

int main(int argc , char **argv) {
  Queue q;
   int i,x;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=q.dequeue();
            //if(x!=-1) cout<<"dequeing "<<x<<endl;
        }
        else {
       q.enqueue(atoi(argv[i]));
           
        }
 }
  return 0;
}
