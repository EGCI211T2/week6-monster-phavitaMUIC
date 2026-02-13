#include <iostream>
using namespace std;

#include "monster.h"

int main(int argc, char* argv[]) {

    monster A("Azurii",20,5);
    monster B("Zuzu",12,3);
    B+=10;
    A+=B;
    --A;
    cout<<"==== The stronger monster is ====\n";
    monster x[5]={{"Awoo"},{"Raya",10},{"Doi",52,3},{"Lalala",12},{"Cay",10,2}};
    monster c;
    B.display();
    
  /*
 
 monster *p,x;
  p=&x;
  p=new monster;
 delete p;

 p=new monster[3];
 delete []p;

*/

}
