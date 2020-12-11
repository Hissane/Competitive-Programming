#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long res;
    int count = 0, m = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a'){
            count++;
            if(i < (n%s.length())){
                m++;
            }
        }  
        
    }
    
    res = (n / s.length())*count + m;
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
