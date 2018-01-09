

int hailstone(int number) {
    int step = 0 ;
    
    if (number == 1) {
        return step;
    }
    
    while (number != 1) {
        if (number % 2 == 0) {
            number = number / 2;
        }
        else {
            number = number * 3 + 1;
        }
        step ++;
    }
    return step;
}
