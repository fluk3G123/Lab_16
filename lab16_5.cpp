#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);  
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d){
	
	int p[4] = {*a,*b,*c,*d};
	int q[4] ,count=0;
	while (p[0] != 0 || p[1] != 0 || p[2] != 0 || p[3] != 0)
	{
		int random = rand()%4;
		if (p[random] != 0 )
		{
			q[count] = p[random];
			count+=1; 
			p[random] = 0;
		}
	}
	*a = q[0];
	*b = q[1];
	*c = q[2];
	*d = q[3];
}