// صاحبی‌فرد

#include<iostream>
#include <math.h>
using namespace std;

struct point{
	int x, y;
	void setpoint(){
		cout << "enter x: ";
		cin >> x;
		cout << "enter y: ";
		cin >> y;
	}
	void print(){
		cout << "x= " << x << " y= " << y<<endl;
	}
};
point change(point p1, int dx, int dy){
	p1.x += dx;
	p1.y += dy;
	return p1;
}
struct triangle{
	point t1, t2, t3;
	void print(){
		cout << "point 1" << endl;
		t1.print();
		cout << "point 2" << endl;
		t2.print();
		cout << "point 3"<<endl;
		t3.print();
	}
	float distance(point a, point b){
		float x = pow((a.x - b.x), 2);
		float y = pow((a.y - b.y), 2);
		return sqrt (x + y);
	}
	void set(){
		bool tri1,tri2,tri3;
		bool f = true;
		while (f){
			cout << "point 1" << endl;
			t1.setpoint();
			cout << "point 2" << endl;
			t2.setpoint();
			cout << "point 3" << endl;
			t3.setpoint();
			if (distance(t1,t2)+distance(t2,t3)>distance(t1,t3)){
				tri1=true;
			}
			if (distance(t1, t3) + distance(t2, t3)>distance(t1, t2)){
				tri2=true;
			}
			if (distance(t1, t2) + distance(t1, t3)>distance(t2, t3)){
				tri3=true;
			}
			if (tri1&&tri2&&tri3){
				f = false;
			}

		}

	}

};
void print(triangle t1){
	t1.print();
}
triangle change(triangle T1, int dx, int dy){
	T1.t1 = change(T1.t1, dx, dy);
	T1.t2 = change(T1.t2, dx, dy);
	T1.t3 = change(T1.t3, dx, dy);
	return T1;
}
float mohit(triangle T2){
	float a1= T2.distance(T2.t1, T2.t2);
	float a2 = T2.distance(T2.t2, T2.t3);
	float a3 = T2.distance(T2.t1, T2.t3);
	return a1 + a2 + a3;
}
float masahat(triangle T1){
	float a = T1.distance(T1.t1, T1.t2);
	float b = T1.distance(T1.t2, T1.t3);
	float c = T1.distance(T1.t1, T1.t3);
	float s=mohit(T1)/2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}
int main()
{
	triangle t1;
	int x, y;
	t1.set();
	t1.print();
	cout << "mohit : " << mohit(t1)<<endl;
	cout << "masahat : " << masahat(t1)<<endl;
	cout << "enter x,y to change location :" << endl;
	cin >> x >> y;
	t1=change(t1, x, y);
	cout << "locations after change: " << endl;
	t1.print();
	return 0;
}
