#include<iostream>
using namespace std;
class cfz
{
private:
	int length;
	int width;
	int height;
public:
	void Set();
	void V();
};
void cfz::Set()
{
	int l, w, h;
	cin >> l >> w >> h;
	length = l;
	width = w;
	height = h;
}
void cfz::V()
{
	int V;
	V = length * width * height;
	cout << V << endl;
}
int main()
{
	cfz a1;
	cfz a2;
	cfz a3;
	a1.Set();
	a2.Set();
	a3.Set();
	a1.V();
	a2.V();
	a3.V();
	return 0;
}