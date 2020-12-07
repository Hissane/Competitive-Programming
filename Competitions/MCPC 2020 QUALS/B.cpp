#include <bits/stdc++.h>

using namespace std;



int main(){
    freopen("lowerupper.in","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string m, m1, m2;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> m;
        m1 = "";
        m2 = "";
        if(m.length()%2){
            for(int j = 1; j < m.length(); j= j + 2){
                m1 += tolower(m[j-1]);
                m2 += toupper(m[j-1]);
                m1 += toupper(m[j]);
                m2 += tolower(m[j]);
            }
            m1 += tolower(m[m.length()-1]);
            m2 += toupper(m[m.length()-1]);
            //cout << m << " " << m1 <<" "<< m2 << endl;
        }else{
            for(int j = 1; j < m.length(); j= j + 2){
                m1 += tolower(m[j-1]);
                m2 += toupper(m[j-1]);
                m1 += toupper(m[j]);
                m2 += tolower(m[j]);
            }
            //cout <<m <<" "<< m1 <<" "<< m2 << endl;
        }
        int count1 = 0, count2 = 0; 
        for(int j = 0; j < m.length(); j++){
            if(m[j] != m1[j]){
                count1++;
            }
            if(m[j] != m2[j]){
                count2++;
            }
        } 
        int res  = count1 > count2 ? count2 : count1;
        cout << res << endl;
    }
    cin >> m;
        m1 = "";
        m2 = "";
        if(m.length()%2){
            for(int j = 1; j < m.length(); j= j + 2){
                m1 += tolower(m[j-1]);
                m2 += toupper(m[j-1]);
                m1 += toupper(m[j]);
                m2 += tolower(m[j]);
            }
            m1 += tolower(m[m.length()-1]);
            m2 += toupper(m[m.length()-1]);
            //cout << m << " " << m1 <<" "<< m2 << endl;
        }else{
            for(int j = 1; j < m.length(); j= j + 2){
                m1 += tolower(m[j-1]);
                m2 += toupper(m[j-1]);
                m1 += toupper(m[j]);
                m2 += tolower(m[j]);
            }
            //cout <<m <<" "<< m1 <<" "<< m2 << endl;
        }
        int count1 = 0, count2 = 0; 
        for(int j = 0; j < m.length(); j++){
            if(m[j] != m1[j]){
                count1++;
            }
            if(m[j] != m2[j]){
                count2++;
            }
        } 
        int res  = count1 > count2 ? count2 : count1;
        cout << res;
    return 0;
}