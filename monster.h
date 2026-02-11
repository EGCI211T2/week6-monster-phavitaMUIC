#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:
	void display();
	void Attack(monster &);
          void heal();
	monster(string="Anonymous", int=1,int=1);
	~monster();
	
};
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
#endif
