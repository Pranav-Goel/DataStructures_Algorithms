using namespace std;
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<algorithm>
#include<list>
#include<map>
#include<utility>
#include<bitset>
int grid[9][9];

bool f1()
{
    for (int i=0; i<9; i++) {
    bitset<9> filled;
    for (int j=0; j<9; j++)
        filled.set(grid[i][j] - 1);
    if (filled.count() != 9)
        return false;
}
for (int j=0; j<9; j++) {
    bitset<9> filled;
    for (int i=0; i<9; i++)
        filled.set(grid[i][j] - 1);
    if (filled.count() != 9)
        return false;
}
for (int i=0; i<9; i += 3){
    for (int j=0; j<9; j += 3) {
        bitset<9> filled;
        for (int k=0; k<3; k++)
            for (int l=0; l<3; l++)
                filled.set(grid[i+k][j+l] - 1);
        if (filled.count() != 9)
            return false;
    }}

return true;

}

int main()
{
	std:ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
    {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                cin>>grid[i][j];
        if(f1())
            cout<<"Its A Sudoku\n";
        else
            cout<<"Not A Sudoku\n";

    }
	return 0;
}
