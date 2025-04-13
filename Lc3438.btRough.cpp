string findValidPair(string s) {
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] != s[i + 1]) {
            string temp = s;
            temp.erase(i, 2);

            unordered_map<char, int> fmap;
            for (char x : temp) {
                fmap[x]++;
            }

            bool isValid = true;
            for (auto &[digit, count] : fmap) {
                int expectedCount = digit - '0';
                if (count != expectedCount) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                return s.substr(i, 2);
            }
        }
    }

    return "";
}
