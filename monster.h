#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void display();
	bool operator>(monster &x);
	void Attack(monster &);
    void heal();
	monster(string="Anonymous", int=1,int=1);
	void operator+=(int);
	void operator+=(monster);
	void operator--(int);
	monster(int,int);
	~monster();
	
};
void monster::operator+=(int a){
	this->hp+=10;
}
void monster::operator+=(monster &x){
	this->hp+=x.hp;
	x.hp=0;
}
void monster::operator--(int a ){
	hp=-5;
}
bool monster::operator>(monster &x){
	if (hp>x.hp) return true;
	else return false;
}

monster::display(){
	cout<<"Name : "<<name<<endl;
	cout<<"HP : "<<hp<<endl;
	cout<<"Potion : "<<potion<<endl;
}

monster::monster(string n, int h, int p){
	name = n;
	hp = h;
	potion =p;
	cout<<"Monster "<<name<<"is here"<<endl; 
}

monster::~monster(){
	cout<<name<< " is gone."<<endl;
}

monster::monster(int, int){

}
#endif
