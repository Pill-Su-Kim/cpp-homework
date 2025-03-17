#include <cstdio>
#include <cmath>

// Gregory-Leibniz 수열을 사용하여 π 근사값 계산
double approximatePi(int terms) {
    double pi = 0.0;
    for (int i = 0; i < terms; ++i) {
        // (-1)^i / (2i + 1) 형태로 계산
        pi += pow(-1, i) / (2 * i + 1); 
    }
    return 4 * pi;  // 4배하여 π 값 근사
}

int main() {
    int n;
    printf("정수 n을 입력하세요 (계산할 항의 수): ");
    scanf("%d", &n);  // 사용자로부터 정수 입력 받기

    double pi_approx = approximatePi(n);
    printf("π에 대한 근사값: %.15f\n", pi_approx);  // 소수점 이하 15자리까지 출력

    return 0;
}
