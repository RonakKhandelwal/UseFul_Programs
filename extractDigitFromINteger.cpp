#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;


int digit(int t,int n,int i){
	int valPow=n-i;
	int divi=pow(10,valPow);
	int d= t/divi;
	return d%10;
}



int main(){
	

}