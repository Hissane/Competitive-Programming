#include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	int M, D, Y, C, Mp, Dp, Yp, Cp, count = 0, cons = 0;
	while(cin >> n && n != 0){
		cin >> D >> M >> Y >> C;
		for (int i = 1; i < n; i++){
			Dp = D; Mp = M; Yp = Y; Cp = C;
			cin >> D >> M >> Y >> C;
			if(Y == Yp){
				if(M == Mp){
					if((D - Dp) == 1){
						cons += (C - Cp);
						count += 1;
					}
				}else if(M - Mp == 1){
					if(D == 1){
						if( Mp == 4 || Mp == 6 || Mp == 9 || Mp == 11 ){
							if(Dp == 30){
								cons += (C - Cp);
								count += 1;
							}
						}else if(Mp == 2){
							if(((Y % 4) == 0 && (Y % 100) != 0) || (Y % 400)==0){
								if(Dp == 29){
									cons += (C - Cp);
									count += 1;
								}
							}else{
								if(Dp == 28){
									cons += (C - Cp);
									count += 1;
								}
							}
						}else{
							if(Dp == 31){
								cons += (C - Cp);
								count += 1;
							}
						}
					}
				}
			}else if(Y - Yp == 1){
				if(M == 1 && D == 1 && Mp == 12 && Dp == 31){
					cons += (C - Cp);
					count += 1;
				}
			}
		}	
		cout << count << " " << cons << endl;
		cons = 0; count = 0;
	}
	return 0;
}