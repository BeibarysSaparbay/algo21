#include <iostream>
#include <map>
#include <fstream>
 
using namespace std;
 
map <string,int> L;
map <string,int>::iterator it;
 
int main()
{
    ifstream Fin ("input.txt");
    ofstream Fout ("output.txt");
    string s;
    int p = L.count ( s );
    while ( Fin >> s )
    {
	bool p;
    p = L.count ( s );
    if ( p == 1 )
    L[s] ++;
    else
    L.insert ( pair <string,int> (s, 1) );
    }
    for ( it = L.begin(); it !=  L.end(); it++ )
    Fout << it->first << " "<< it->second << endl;
    return 0;
}
