#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
template<class T>class Stack;

template <class T> Stack<T> operator+(const Stack<T> &s1,const Stack<T> &s2)
{
	Stack<T> result = s1;
	for(unsigned i=0;i<s2.pila.size();i++)
	{
		result.pila.push_back(s2.pila[i]);
	}
	return result;
}
template <class T> Stack<T> operator-(const Stack<T> &s1,const Stack<T> &s2)
{
	Stack<T> result;
	for(unsigned i=0;i<s1.pila.size();i++){
		bool val=true;
		for(unsigned x=0;x<s2.pila.size();x++){
			if(s1.pila[i]==s2.pila[x]){
				val=false;
				break;
				}
		}
		if(val==true)
			result.pila.push_back(s1.pila[i]);

	}
	return result;
	}
template <class T> ostream &operator<<(ostream &o,const Stack<T> &s1)
{
	ostream stream;
	for(unsigned i=0;i<s1.pila.size();i++){
		o<<"---------|--------|----------";
		o<<"---------"<<s1.pila[i]<<"-------"<<endl;
	}
	return o;
}

template <class T>
class Stack
{
private:
	vector<T> pila;
	friend ostream &operator<<<>(ostream &o,const Stack<T> &s1);
	friend Stack<T>operator+<>(const Stack<T> &s1,const Stack<T> &s2);
	friend Stack<T>operator-<>(const Stack<T> &s1,const Stack<T> &s2);
public:
	void push(const T &x){
		pila.push_back(x);
	}
	void poop(){
		if(pila.size()!=0)
			pila.pop_back();
	}
	void imprimir(){
		for(unsigned i=0;i<pila.size();i++)
			cout<<pila[i]<<endl;
	}
	void remove(T &x){
		pila[x] = pila.size();
		pila.pop_back();
	}
};


int main(){
	Stack<int> p1;
	p1.push(1);
	p1.push(5);
	p1.push(3);
	p1.push(8);
	p1.push(10);

	Stack<int> p2;
	p2.push(1);
	p2.push(5);
	p2.push(6);
	p2.push(7);
	p2.push(9);

	Stack<int> R = p1 - p2;
	//R.imprimir();
	cout<<R;
	return 0;
}
