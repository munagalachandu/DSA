int romanToInt(char* s) {
    int values[26] = {0};
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;

    int total = 0, prev = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        int curr = values[s[i] - 'A'];

        if (curr < prev)
            total -= curr;
        else
            total += curr;

        prev = curr;
    }

    return total;
}