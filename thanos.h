#ifndef thanos_h
#define thanos_h

class Thanos {
private:
	int stones;
	int hp; 
public:
	/* constructor and destructor */
	void snap_finger(monster arr[], int n);
	Thanos(int s=0,int h=1000); //stone hp
	~Thanos(); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
Thanos::Thanos(int s, int h){
	stones = s;
	hp= h;
}

void Thanos::operator++(){
	stones++;
	cout<<"Thanos has "<<stones<<" stones"<<endl;
}


void Thanos::snap_finger(monster arr[],int n){
	cout<<"Thanos has snapped his fingers!"<<endl;
	if (stones == 6){
		cout<<"Thanos has deleted half the world!!"<<endl;
		for (int i=0;i<n;i += 2){
			arr[i].sethp(0);
		}
	}
	else 
	cout<<"Nothing happens! Thanos needs more stones!"<<endl;
}

Thanos::~Thanos() {
    cout << "Thanos disappears." << endl;
}
#endif
