#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void display();
	bool operator>(monster &);
	void Attack(monster &);
    void heal();
	void sethp(int a);
	int gethp();
	monster(string="Anonymous", int=1,int=1);
	void operator+=(int);
	void operator+=(monster &);
	void operator--(int);
	~monster();
	
};

int monster::gethp(){
	return hp;
}
void monster::operator+=(int a){
	this->hp+=10;
}
void monster::operator+=(monster &x){
	this->hp+=x.hp;
	x.hp=0;
}
void monster::operator--(int){
	hp-=5;
}

void monster::sethp(int n){
	hp = n;
}
bool monster::operator>(monster &x){
	if (hp>x.hp) return true;
	else return false;
}

void monster::display(){
	cout<<"Name : "<<name<<endl;
	cout<<"HP : "<<hp<<endl;
	cout<<"Potion : "<<potion<<endl;
}

monster::monster(string n, int h, int p){
	name = n;
	hp = h;
	potion =p;
	cout<<"Monster "<<name<<" is here "<<endl; 
}

monster::~monster(){

}

#endif
