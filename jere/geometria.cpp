
#include <bits/stdc++.h>

#define forn(i, n) for (tint i = 0; i < (n); ++i)
#define X real()
#define Y imag()

using namespace std;
using tint = long double;
using point = complex<tint>;
using pii = pair<int, tint>;

int main() {
    point p{10, 0};
    p +=(point){0, 10};
    cout << p.X << " " << p.Y << "\n";
}

// producto cruz:
// [a] * [C] = ad - bc (cerca del area del paralelaramo entre los vectores)
// [b]   [d]
// u xv

// si v va a la derecha mi producto cruz es negativo (vector v sera tipo recto arriba del u)

// line segment intersection
// we wanna know is the intercect
// caso 1: se intercecan en infinitos puntos >>  1) producto cruz = 0 2) sortear >> A, C, B, D o C, A, D, B; si en intecalado entonces
// caso 2: 1 interseccion: 1) side(seg, p) dice de que lado esta > chequeamos si los puntos estan del mismo lado.

//intersect(1,2)
// pip = point in polygon (conjunto de los puntos) - importa el orden de los puntos


// exponenciacion de matrices
// b^x
// 3 ^^ 10000
// b^n = b^(n/2) * b^(n/2)
// altura de ese arbol sera log(n)

// binPow(int b, int x, int mod) {
// if x == 0: return 2;
// int mid = bunPow(b, x/2, mod)
// mid = (mid * mid) % mod
// if (x % 2): mid = (mid * b) % mod;
// return mid; }







