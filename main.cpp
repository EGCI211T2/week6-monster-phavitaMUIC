#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main(int argc, char* argv[]) {
  Thanos T;
  int n;
  cout<<"How many monsters : ";
  cin>>n;
  monster *m=new monster[n];  //make sure they have hp
  if (n > 0) m[0] = monster("Awoo", 10, 20);
  if (n > 1) m[1] = monster("kayla", 100, 20);
  if (n > 2) m[2] = monster("azure", 11, 24);
  if (n > 3) m[3] = monster("shaw", 100, 2);
  if (n > 4) m[4] = monster("Caycay", 20, 10);

  cout<<"Thanos walks along a lavander field... suddenly he finds a stone on the floor?"<<endl;
  ++T;
  T.snap_finger(m,n);
  cout<<"Thanos walks in a chatuchak market... Thanos buys 2 stones in the market?"<<endl;
  ++T;
  ++T;
  T.snap_finger(m,n);
  cout<<"Thanos swims in niagara falls... Thanos finds 2 stones underwater?"<<endl;
  ++T;
  ++T;
  T.snap_finger(m,n);
  cout<<"Thanos returns home... he finds a stone on the dining table?"<<endl;
  ++T;
  T.snap_finger(m,n);
  cout<<"Remaining monsters :"<<endl;
  int i;
 for(i = 0; i < n; i++){
    if (m[i].gethp() != 0){
        m[i].display();
    }
}

  delete[] m;
}
