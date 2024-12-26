#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
    ifstream inputFIle("word.txt");
    string line;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r =0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    

    if(!inputFIle){
        cout << "Error: file can't open succesully";
        return 0;
    }

    while(getline(inputFIle,line)){
        int num = line.size();
        for(int i = 0; i < num; ++i){
            switch(line[i]){
                case 'a':
                case 'A':
                    ++a;
                    break;

                case 'b':
                case 'B':
                    ++b;
                    break;

                case 'c':
                case 'C':
                    ++c;
                    break;

                case 'd':
                case 'D':
                    ++d;
                    break;

                case 'e':
                case 'E':
                    ++e;
                    break;

                case 'f':
                case 'F':
                    ++f;
                    break;

                case 'g':
                case 'G':
                    ++g;
                    break;

                case 'h':
                case 'H':
                    ++h;
                    break;

                case 'i':
                case 'I':
                    ++i;
                    break;

                case 'j':
                case 'J':
                    ++j;
                    break;

                case 'k':
                case 'K':
                    ++k;
                    break;

                case 'l':
                case 'L':
                    ++l;
                    break;

                case 'm':
                case 'M':
                    ++m;
                    break;

                case 'n':
                case 'N':
                    ++n;
                    break;

                case 'o':
                case 'O':
                    ++o;
                    break;

                case 'p':
                case 'P':
                    ++p;
                    break;

                case 'q':
                case 'Q':
                    ++q;
                    break;

                case 'r':
                case 'R':
                    ++r;
                    break;

                case 's':
                case 'S':
                    ++s;
                    break;

                case 't':
                case 'T':
                    ++t;
                    break;

                case 'u':
                case 'U':
                    ++u;
                    break;

                case 'v':
                case 'V':
                    ++v;
                    break;

                case 'w':
                case 'W':
                    ++w;
                    break;

                case 'x':
                case 'X':
                    ++x;
                    break;

                case 'y':
                case 'Y':
                    ++y;
                    break;

                case 'z':
                case 'Z':
                    ++z;
            }
        }
    }
    cout << "Number of a : " << a << endl;
    cout << "Number of b : " << b << endl;
    cout << "Number of c : " << c << endl;
    cout << "Number of d : " << d << endl;
    cout << "Number of e : " << e << endl;
    cout << "Number of f : " << f << endl;
    cout << "Number of g : " << g << endl;
    cout << "Number of h : " << h << endl;
    cout << "Number of i : " << i << endl;
    cout << "Number of j : " << j << endl;
    cout << "Number of k : " << k << endl;
    cout << "Number of l : " << l << endl;
    cout << "Number of m : " << m << endl;
    cout << "Number of n : " << n << endl;
    cout << "Number of o : " << o << endl;
    cout << "Number of p : " << p << endl;
    cout << "Number of q : " << q << endl;
    cout << "Number of r : " << r << endl;
    cout << "Number of s : " << s << endl;
    cout << "Number of t : " << t << endl;
    cout << "Number of u : " << u << endl;
    cout << "Number of v : " << v << endl;
    cout << "Number of w : " << w << endl;
    cout << "Number of x : " << x << endl;
    cout << "Number of y : " << y << endl;
    cout << "Number of z : " << z << endl;
    return 0;
}