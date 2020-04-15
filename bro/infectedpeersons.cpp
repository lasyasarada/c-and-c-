#include <bits/stdc++.h> 
using namespace std; 
const int n=3,m=3;
bool issafe(int i, int j) 
{ 
    if (i >= 0 && i < n && j >= 0 && j < m) 
        return true; 
    return false; 
} 
  
int infectedPersons(int v[n][m]) 
{ 
    bool changed = false; 
    int no = 1; 
    while (true) { 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                if (v[i][j] == no) { 
                    if (issafe(i + 1, j) && v[i + 1][j] == 0) { 
                        v[i + 1][j] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i, j + 1) && v[i][j + 1] == 0) { 
                        v[i][j + 1] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i - 1, j) && v[i - 1][j] == 0) { 
                        v[i - 1][j] = v[i][j] + 1; 
                        changed = true; 
                    } 
                    if (issafe(i, j - 1) && v[i][j - 1] == 0) { 
                        v[i][j - 1] = v[i][j] + 1; 
                        changed = true; 
                    } 
                } 
            } 
        } 
        if (!changed) 
            break; 
        changed = false; 
        no++; 
    } 
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            if (v[i][j] == 0) 
                return -1; 
        } 
    } 
}
int main() 
{ 
  	//int n=3,m=3;
    int v[n][m] = { { 1,0,0}, 
                    { 0,0,0 }, 
                    { 0,0,1} }; 
  
    cout << infectedPersons(v); 
  
    return 0; 
} 
