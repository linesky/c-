#include <iostream>
using namespace std;
class class1{
	protected:
	char *c;
	public:
	class1(char *cc){
		cout << "\ec\e[47;30m\n";
		cout << "class init\n";
		c=cc;
	};
	void prints(void){
		cout << c;
	};
	~class1(){
		cout << "class end\n";
	}
};
int main(){
	char c[80]="hello world...\n";
	class1 c1(c);
	c1.prints();
	return 0;
}
