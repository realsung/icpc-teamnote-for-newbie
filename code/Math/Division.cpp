// floor(p / q)
int floor(int p, int q){
    if(q < 0) p = -p, q = -q;
    return p >= 0 ? p / q : (p - q + 1) / q;
}

// ceil(p / q)
int ceil(int p, int q){
    if(q < 0) p = -p, q = -q;
    return p >= 0 ? (p + q - 1) / q : p / q;
}

// a, b >= 0, O(log max(a,b))
int gcd(int a, int b){ return b ? gcd(b, a % b) : 0; }
int lcm(int a, int b){ return a / gcd(a, b) * b; }