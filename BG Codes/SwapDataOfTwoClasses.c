#include<iostream>
using namespace std;

class yourclass;

class myclass{
int value1;
public:
void indata(int a){value=a;}
void display(void){cout<<value1;}
friend void exchange(yourclass &,myclass &);

}
class yourclass{
int value2;
public:
    void indata(int a ){value1=a;}
    void display(void){cout<<value2;}
    friend void exchange(yourclass &,myclass&);
};
void exhange(yourclass &x,myclass&y){
int temp=x.value1;
x.value1=y.value2;
y.value2=temp;

}

int main(){
 yourclass Y;
  myclass X;

  Y.indata(20);
  X.indata(10);
  cout<<"Orignial Values : "<<X.display()<<"and "<<Y.display();
  exchange(X,Y);
  cout<<"Final Values : "<<X.display()<<"and "<<Y.display();
  return 0;
}
