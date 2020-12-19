/*
Solving previous question using class and vector instead of pair.
In input we have 3 things - name , x and y coordinates
Sort according to the distance and cars with same distance sort them according to there names.
*/

#include<bits/stdc++.h>
using namespace std;

class Car {
public:
	string name;
	int x, y;
	//empty constructor
	Car() {

	}
	//parameterised constructor
	//variables can be initialised using this
	Car(string n , int x , int y) {
		name = n;
		this -> x = x;
		this -> y = y;
	}

	int distance() {
		return x * x + y * y;
	}
};

bool compare(Car A , Car B) {
	int distance_A = A.distance();
	int distance_B = B.distance();
	if (distance_A == distance_B) {
		return A.name < B.name;
	}
	return distance_A < distance_B;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector <Car> v;
	for (int i = 0; i < n; i++) {
		string name;
		int x, y;
		cin >> name >> x >> y;

		//creating an object of car class
		Car c(name, x, y);
		v.push_back(c);
	}

	sort(v.begin(), v.end(), compare);

	for (auto c : v) {
		cout << "Name: " << c.name << " x coordinate: " << c.x << " y coordinate: " << c.y;
	}

	return 0;
}