int stoi(char* str) {
    int tmp = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] <= '9' && str[i] >= '0') {
            tmp *= 10;
            tmp += str[i] - '0';
            ++i;
        } else {
            break;
        }
    }

    return tmp;
}

