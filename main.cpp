#include <iostream>

using namespace std;

//2 Convertir de farenheit a celsius
void conver(int f){
	float c;
	for(int i= 0; i< f; i+=20){
		c = (i - 32) * 5/9;
		cout << "Farenheit: "<< i << "Celsius: "<< c << endl;
	}
}
int main()
{
    int a;
    cin >> a;
    conver(a);
    return 0;
}
