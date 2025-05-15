function MinDigit(n) {
    n = Math.abs(n);
    if (n < 10) return n;

    let last = n % 10;
    let Min = MinDigit(Math.floor(n / 10));
    
    return Math.min(last, Min);
}

console.log(MinDigit(53829));
