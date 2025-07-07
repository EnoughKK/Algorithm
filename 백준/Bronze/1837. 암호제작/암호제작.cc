#include <bits/stdc++.h>
using namespace std;

// string p를 int로 나눈 나머지를 반환
int mod(string p, int x) {
    int res = 0;
    for (char c : p) {
        res = (res * 10 + (c - '0')) % x;
    }
    return res;
}

// main
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string p;
    int k;
    cin >> p >> k;

    // 소수 리스트 생성 (에라토스테네스의 체)
    vector<bool> isPrime(k, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < k; i++) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j < k; j += i) {
            isPrime[j] = false;
        }
    }

    // 작은 소수로 나눠보기
    for (int i = 2; i < k; i++) {
        if (isPrime[i]) {
            if (mod(p, i) == 0) {
                cout << "BAD " << i << "\n";
                return 0;
            }
        }
    }

    cout << "GOOD\n";
    return 0;
}

/*
에라토스테네스의 체, 큰 수 나머지 계산

<포인트>
- 소수 리스트 생성 (에라토스테네스의 체)
- 문자열 "123456"을 숫자로 나누는 과정을 수학적으로 풀어 보면:
처음에는 1 % x
그다음 (1*10 + 2) % x
그다음 ((1*10 + 2)*10 + 3) % x
이렇게 반복하면서 각 자릿수마다 나머지 누적을 업데이트합니다.
*/
