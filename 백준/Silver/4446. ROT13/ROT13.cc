#include <bits/stdc++.h>
using namespace std;

const string vowel = "aiyeou";
const string consonant = "bkxznhdcwgpvjqtsrlmf";

char transformChar(char c) {
    bool upper = isupper(c);
    char lower = tolower(c);

    auto vpos = vowel.find(lower);
    if (vpos != string::npos) {
        char res = vowel[(vpos + 3) % vowel.size()];
        return upper ? toupper(res) : res;
    }

    auto cpos = consonant.find(lower);
    if (cpos != string::npos) {
        char res = consonant[(cpos + 10) % consonant.size()];
        return upper ? toupper(res) : res;
    }

    return c; // 알파벳 아니면 그대로 반환
}

int main() {
    string s;
    while (getline(cin, s)) {   // EOF까지 계속 읽기
        string result;
        for (char c : s) {
            result.push_back(transformChar(c));
        }
        cout << result << "\n";
    }
    return 0;
}
