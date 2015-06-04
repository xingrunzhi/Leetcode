#include <iostream>
using namespace std;

void Settozero(double a[int M][int N]){
	double row[M] = {0}, vector[N]={0};
	int i,j;
	for (i = 0;i < M; i++){
		for (j = 0; j < N; j++){
			if(a[i][j]== 0) { row[i]++; vector[j++];}
		}
	}
	for (i = 0; i < M; i++){
		if (row[i] != 0) for(j = 0;j < N; j++) a[i][j] = 0;
	}
	for (j = 0; j < N; j++){
		if (vector[j] != 0) for(i = 0; i < M; i++)a[i][j] =0;ß
	}
	return;
}

int main(){
	double a[4][3] ={
		{0,1,2},
		{3,4,5},
		{6,7,8},
		{9,10,11},
	};
	Settozero(a[4][3]);
	cout << a<<endl;
	return 0;
}