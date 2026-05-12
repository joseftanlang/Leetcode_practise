bool isPerfectSquare(int num) {
    double numer = sqrt(num);
    double rounder = floor(numer);
    if (numer != rounder) {
        return false;
    } else {
        return true;
    }
}