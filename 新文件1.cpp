#include <iostream>
using namespace std;

int main()
{
	int num ,x ,y,z;
	num = 1;
	while(num <= 100){
	if (num == 1){
		cout << num <<"是質數\n";
	}
	else {
		for(int i =1;i<=num;i++){
			x = num % i;
			if (x == 0 ){
				y++;
			}
		}
		if (y==2){
			cout << num <<"是質數\n";
			y=0;
		}
		else{
			cout << num <<"不是質數\n";
			y=0;
		}
	}
	num+=1;
}
return 0;	
}





