// practicum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//1. 
//int main()
//{
   // cout << "Oh what" << endl << "a happy day!" << endl << "Oh yes," << endl << "what a happy day!";
//}

//2.
//int main()
//{
   // int a1 = 5;
    //int b1 = 4;

    //int a2 = 7;
    //int b2 = 9;

    //int S1 = a1 * b1;
    //int S2 = a2 * b2;

    //cout << "Rectangle 1 Face = " << S1 << endl << "Rectangle 2 Face = " << S2 << endl;
//}
// 
// 3. 
//int main()
//{
    //int lev;

    //cin >> lev;
    //cout << "Lev: " << lev << endl;
   // cout << "Euro: " << (lev / 1.96) << endl;
    //cout << "USD:  " << (lev / 1.77) << endl;
//}
// int main()
    //{
       // double sideA, sideB;

        //cout << "Please enter the length of the first side: ";
        //cin >> sideA;
        // 
        //cout << "Please enter the length of the second side: ";
        //cin >> sideB;
        // 
        //cout << "The Face of the Rectangle is: " << (sideA * sideB) << endl;
   // }
//5.
//int main()
//{
   // int a, b;
    //cin >> a >> b;
    //cout << (a < b);
//}

//int main()
//{
    //int a, b;
    // cout << "Dividend: ";

    //cin >> a;
    // cout << "Divisor: ";
    //cin >> b;
    //cout << "The quotient of the division is : " << (a / b) << endl << "The remainder of the division is : " << (a % b) << endl;
//}

/*7.
int main()
{
    int apples, pears, bananas;
    cout << "Apples: ";
    cin >> apples;

    cout << "Pears: ";
    cin >> pears;

    cout << "Bananas: ";
    cin >> bananas;

    cout << "Pesho, don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";
}

8.
int main()
{
    int r;
    double PI = 3.14159265;

    cin >> r;
    double length = 2 * PI * r;
    double face = PI * r * r;

    cout << "Circle Length: " << length << endl << "Circle Face: " << face << endl;
}

int main()
{
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    double D = (b * b) - (4 * a * c);
    double x1 = ((b * (-1)) + sqrt(D)) / 2;
    double x2 = ((b * (-1)) - sqrt(D)) / 2;

    cout << "x1 = " << x1 << ", x2 = " << x2;
}

int main()
{
    int a, b, c, d;
    int temp;
    cin >> a >> b >> c >> d;

    temp = a;
    a = b;
    b = temp;

    c = d + c;
    d = c - d;
    c = c - d;

    cout << "a: " << a << ", b: " << b << ", c: " << c << ", d: " << d;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool is_a_bigger = a > b;
    bool is_b_bigger = a < b;

    cout << "Max: " << ((is_a_bigger * a) + (is_b_bigger * b));
    cout << "Min: " << ((is_b_bigger * a) + (is_a_bigger * b));
}

int main()

{
    long sec;
    cout << "Seconds: ";
    cin >> sec;

    int days, hours, minutes, seconds;

    seconds = sec % 60;
    minutes = (sec / 60) % 60;
    hours = (sec / (60 * 60)) % 24;
    days = sec / (60 * 60 * 24);

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds\n";
}

int main()
{
    int n;
    cin >> n;

    bool is_n_negative = n < 0;
    double sum = ((n / 2.0) * (n + 1)) * !is_n_negative;
    cout << "Sum: " << sum;
}

Practicum02
1:
int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 == 0) cout << "Godinata e visokosna!\n";
    else cout << "Godinata ne e visokosna!\n";
}

2:
int main()
{
    char c;
    cin >> c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                cout << "The letter is vowel!\n";
            }
            else cout << "The letter is not vowel!\n";
        }
        else cout << "The char is not in the latin alphabet!\n";
}

/*4:
            int main()
            {
                cout << "Enter a grade in percentage: ";
                int grade;
                cin >> grade;
                if (grade >= 0 && grade <= 100)
                {
                    if (grade >= 90) cout << "6+";
                    else if (grade >= 80) cout << "6";
                    else if (grade >= 70) cout << "5";
                    else if (grade >= 60) cout << "4";
                    else if (grade >= 40) cout << "3";
                    else cout << "2";
                }
                else cout << "Invalid grade!\n";
            }

            5:
            int main()
            {
                int a, b, c;
                cin >> a;
                cin >> b;
                cin >> c;

                if (a + b > c && a + c > b && b + c > a) cout << "Valid triangle! \n";
                else cout << "Invalid triangle! \n";
            }

            Practicum03
            1:
                    int main()
                    {
                        int n;
                        cout << "Enter a positive integer: ";
                        cin >> n;
                        long long factorial = 1;

                        for (int i = 1; i <= n; i++) 
                        {
                            factorial *= i;
                        }
                        cout << "Factorial: " << factorial << endl;
                    }
                    2:
                    int main()
                    {
                        int n, m;
                        cout << "Start: ";
                        cin >> n;
                        cout << "End: ";
                        cin >> m;

                        if (n >= 0 && n <= 255 && m >= 0 && m <= 255) 
                        {
                            for (int i = n; i <= m; i++) 
                            {
                                cout << i << " --> " << static_cast<char>(i) << endl;
                            }
                        }
                        else 
                        {
                            cout << "Invalid codes!" << endl;
                        }
                    }
                    3:
                    int main()
                    {
                        int n;
                        cout << "Enter n: ";
                        cin >> n;
                        for (int x = 1; x < n; x++) 
                        {
                            cout << "x = " << x << ", y = " << (n - x) << endl;
                        }
                    }
                    4:
                    int main()

                    {
                        int n;
                        cout << "Enter a number: ";
                        cin >> n;
                        while (n >= 10) 
                        {
                            int sum = 0;

                            while (n > 0) 
                            {
                                sum += n % 10;
                                n /= 10;
                            }
                            n = sum;
                        }
                        cout << n << endl;
                    }
                    6:
                    int main() 
                    {
                        int m, n;
                        cout << "Enter m and n: ";
                        cin >> m >> n;
                        for (int i = 1; i <= m * n; i++) 
                        {
                            cout << i << (i % n == 0 ? "\n" : " ");
                        }
                    }

                    7:
                    int main()
                    {
                        bool is_prime(int num)
                        {
                        if (num < 2) return false;
                        for (int i = 2; i * i <= num; i++)
                        {
                            if (num % i == 0) return false;
                        }
                        return true;
                    }

                    int total = 0;

                    for (int num = 100; num < 1000; num++)

                    {

                        int digit_sum = 0, temp = num;

                        while (temp > 0)

                        {

                            digit_sum += temp % 10;

                            temp /= 10;

                        }
                        if (digit_sum >= 10 && is_prime(digit_sum))
                        {
                            total += num;
                        }
                    }
                    cout << "Sum: " << total << endl;
                }

                8:
                int main()
                {
                    int n;
                    cout << "Enter n: ";
                    cin >> n;
                    long long a = 0, b = 1;
                    cout << a;
                    for (int i = 1; i < n; i++) 
                    {
                        cout << " " << b;
                        long long next = a + b;
                        a = b;
                        b = next;
                    }
                    cout << endl;
                }

                9:
                int main()
                {
                    int n, m;
                    cout << "Enter N and M: ";
                    cin >> n >> m;
                    long long total = 0;
                    for (int i = n; i <= m; i++)
                    {
                        if (is_prime(i)) 
                        {
                            total += i;
                        }
                    }
                    cout << "Sum of primes: " << total << endl;
                }

                10:
                int main()
                {
                    int n;
                    cout << "Enter N: ";
                    cin >> n;
                    int sum = n * (n + 1) / 2;
                    for (int i = 1; i < n; i++) 
                    {
                        int num;
                        cin >> num;
                        sum -= num;
                    }

                    cout << "Missing number: " << sum << endl;
                }


                11:

                int main()

                {

                    while (true) {

                        int n;

                        cin >> n;

                        int digit_sum = 0, temp = n;

                        while (temp > 0) {

                            digit_sum += temp % 10;

                            temp /= 10;

                        }

                        if ((n + digit_sum) % 10 == 0) {

                            cout << "Program ends: " << n << " + " << digit_sum << " = " << (n + digit_sum) << endl;

                            break;

                        }
                        else {

                            cout << "Bad number: " << n << " + " << digit_sum << " = " << (n + digit_sum) << endl;

                        }

                    }

                }



                12:

                int main()

                {

                    int n;

                    cout << "Enter n: ";

                    cin >> n;

                    long long total = 0;

                    for (int i = 1; i <= n; i++) {

                        total += i * (i + 1) / 2;

                    }

                    cout << total << endl;

                }



                13:

                int main()

                {

                    int h1, m1, h2, m2;

                    cout << "Enter time 1 (HH MM): ";

                    cin >> h1 >> m1;

                    cout << "Enter time 2 (HH MM): ";

                    cin >> h2 >> m2;

                    int time1 = h1 * 60 + m1;

                    int time2 = h2 * 60 + m2;

                    for (int t = time1; t <= time2; t++) {

                        cout << t / 60 << ":" << (t % 60 < 10 ? "0" : "") << t % 60 << endl;

                    }

                }



                14:

                int gcd(int a, int b)

                {

                    while (b)

                    {

                        int temp = b;

                        b = a % b;

                        a = temp;

                    }

                    return a;

                }



                int main()

                {

                    int n;

                    cout << "Enter N: ";

                    cin >> n;

                    long long total = 0;

                    while (true)

                    {

                        int num;

                        cin >> num;

                        if (num == -1) break;

                        if (gcd(n, num) == 1)

                        {

                            total += num;

                        }

                    }

                    cout << total << endl;

                }



                15:

                int main()

                {

                    int n;

                    cout << "Enter N: ";

                    cin >> n;

                    for (int a = 1; a <= n; a++) {

                        for (int b = a; b <= n; b++) {

                            for (int c = b; c <= n; c++) {

                                if (a * a + b * b == c * c) {

                                    cout << a << " " << b << " " << c << endl;

                                }

                            }

                        }

                    }

                }



                16:

                int main() {

                    int m, n;

                    cout << "Enter m and n: ";

                    cin >> m >> n;

                    for (int i = m; i <= n; i++) {

                        int sum = 0;

                        for (int j = 1; j < i; j++) {

                            if (i % j == 0) {

                                sum += j;

                            }

                        }

                        if (sum == i) {

                            cout << i << endl;

                        }

                    }

                }



                17:

                int main() {

                    int n;

                    cout << "Enter N: ";

                    cin >> n;

                    int pairs[n / 2];

                    bool equal = true;

                    int max_diff = 0;



                    for (int i = 0; i < n / 2; i++) {

                        int a, b;

                        cin >> a >> b;

                        pairs[i] = a + b;

                        if (i > 0) {

                            if (pairs[i] != pairs[i - 1]) {

                                equal = false;

                                max_diff = max(max_diff, abs(pairs[i] - pairs[i - 1]));

                            }

                        }

                    }



                    if (equal) {

                        cout << "Equal sums: " << pairs[0] << endl;

                    }
                    else {

                        cout << "Different sums. Max Difference: " << max_diff << endl;

                    }

                }

                18:

                int main()

                {

                    int k, n, m;

                    cout << "Enter K: ";

                    cin >> k;

                    cout << "Enter range N and M: ";

                    cin >> n >> m;

                    for (int i = n; i <= m; i++) {

                        bool special = true;

                        int temp = i;

                        while (temp > 0) {

                            int digit = temp % 10;

                            if (digit == 0 || k % digit != 0) {

                                special = false;

                                break;

                            }

                            temp /= 10;

                        }

                        if (special) {

                            cout << i << " ";

                        }

                    }

                    cout << endl;

                }



                21:

                int main() {

                    int n;

                    cout << "Enter N: ";

                    cin >> n;

                    for (int i = 0; i < n; i++) {

                        for (int j = 0; j < n; j++) {

                            cout << ((i + j) % 2 == 0 ? "*" : " ");

                        }

                        cout << endl;

                    }

                }



                22:

                int main()

                {

                    int n;

                    cout << "Enter N: ";

                    cin >> n;

                    int matrix[n][n] = { 0 };

                    int num = 1;

                    int top = 0, left = 0;

                    int bottom = n - 1, right = n - 1;



                    while (num <= n * n) {

                        for (int i = left; i <= right; i++) matrix[top][i] = num++;

                        top++;

                        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;

                        right--;

                        for (int i = right; i >= left; i--) matrix[bottom][i] = num++;

                        bottom--;

                        for (int i = bottom; i >= top; i--) matrix[i][left] = num++;

                        left++;

                    }



                    for (int i = 0; i < n; i++) {

                        for (int j = 0; j < n; j++) {

                            cout << matrix[i][j] << " ";

                        }

                        cout << endl;

                    }

                }*/ 

 /*Practicum04

                int sum(int a, int b)

                {

                    return a + b;

                }



                bool isEven(int num) {

                    return num % 2 == 0;

                }



                bool isPositive(int num) {

                    return num > 0;

                }



                bool isNegative(int num) {

                    return num < 0;

                }



                int abs(int num) {

                    return (num < 0) ? -num : num;

                }



                void print(char S, int N) {

                    for (int i = 0; i < N; i++) {

                        cout << S;

                    }

                    cout << endl;

                }



                bool isCapitalLetter(char S) {

                    return S >= 'A' && S <= 'Z';

                }



                bool checkSymbol(char S) {

                    return (S >= 'A' && S <= 'Z') || (S >= 'a' && S <= 'z');

                }



                char to_upper(char ch) {

                    if (ch >= 'a' && ch <= 'z') {

                        return ch - ('a' - 'A');

                    }

                    return ch;

                }



                char to_lower(char ch) {

                    if (ch >= 'A' && ch <= 'Z') {

                        return ch + ('a' - 'A');

                    }

                    return ch;

                }



                int length(int n) {

                    int len = 0;

                    while (n != 0) {

                        n /= 10;

                        len++;

                    }

                    return len;

                }



                int sumOfDigits(int num) {

                    int sum = 0;

                    while (num > 0) {

                        sum += num % 10;

                        num /= 10;

                    }

                    return sum;

                }



                int reduceToSingleDigit(int num) {

                    while (num >= 10) {

                        num = sumOfDigits(num);

                    }

                    return num;

                }



                void prime_factorization(int num) {

                    for (int i = 2; i <= num; i++) {

                        while (num % i == 0) {

                            cout << i << (num / i > 1 ? "." : "");

                            num /= i;

                        }

                    }

                    cout << endl;

                }



                int sortDigits(int num) {

                    string digits = to_string(num);

                    for (int i = 0; i < digits.size(); i++) {

                        for (int j = i + 1; j < digits.size(); j++) {

                            if (digits[i] > digits[j]) {

                                swap(digits[i], digits[j]);

                            }

                        }

                    }

                    return stoi(digits);

                }



                int main()

                {

                    //functions from practicum04

                    return 0;

                }*/

/*Practicum 05
                void swap(int& a, int& b)

                {

                    int temp = a;

                    a = b;

                    b = temp;

                }



                char to_upper(char ch)

                {

                    if (ch >= 'a' && ch <= 'z')

                    {

                        return ch - ('a' - 'A');

                    }

                    return ch;

                }



                char to_lower(char ch)

                {

                    if (ch >= 'A' && ch <= 'Z')

                    {

                        return ch + ('a' - 'A');

                    }

                    return ch;

                }



                void sort(int& min, int& mid, int& max)

                {

                    if (min > mid) swap(min, mid);

                    if (mid > max) swap(mid, max);

                    if (min > mid) swap(min, mid);

                }



                void student(int& age, int& facultyNumber)

                {

                    if (age < 15) age = 15;

                    if (age > 100) age = 100;

                    if (facultyNumber < 10000) facultyNumber = 10000;

                    if (facultyNumber > 99999) facultyNumber = 99999;

                }



                int gcd(int a, int b)

                {

                    while (b != 0)

                    {

                        int temp = b;

                        b = a % b;

                        a = temp;

                    }

                    return a;

                }



                void reduce(int& numerator, int& denominator)

                {

                    int divisor = gcd(numerator, denominator);

                    numerator /= divisor;

                    denominator /= divisor;

                }



                void swap_k_digits(int& n, int& m, int k)

                {

                    string num1 = to_string(n), num2 = to_string(m);

                    if (k > num1.size() || k > num2.size()) return;

                    swap(num1[num1.size() - k], num2[num2.size() - k]);

                    n = st(num1);

                    m = st(num2);

                }



                void split_number(int n, int& part1, int& part2)

                {

                    string num = to_string(n);

                    int mid = (num.size() + 1) / 2;

                    part1 = st(num.substr(0, mid));

                    part2 = st(num.substr(mid));

                }



                void latest_performance()

                {

                    int n;

                    cin >> n;

                    int latestHour = 0, latestMinute = 0;

                    for (int i = 0; i < n; i++)

                    {

                        int startHour, startMinute, duration;

                        cin >> startHour >> startMinute >> duration;

                        int endHour = startHour + (startMinute + duration) / 60;

                        int endMinute = (startMinute + duration) % 60;

                        if (endHour > latestHour || (endHour == latestHour && endMinute > latestMinute))

                        {

                            latestHour = endHour;

                            latestMinute = endMinute;

                        }

                    }

                    cout << latestHour << " " << latestMinute << endl;

                }



                bool has_k(int num, int k)

                {

                    int count = 0;

                    for (int i = 2; i <= num; i++)

                    {

                        while (num % i == 0)

                        {

                            if (++count > k) return false;

                            num /= i;

                        }

                    }

                    return count == k;

                }



                void replace_k(int& a, int& b, int k)

                {

                    int minNum = -1, maxNum = -1;

                    for (int i = a; i <= b; i++)

                    {

                        if (hasKPrimeFactors(i, k))

                        {

                            if (minNum == -1) minNum = i;

                            maxNum = i;

                        }

                    }

                    if (minNum != -1)

                    {

                        a = minNum;

                        b = maxNum;

                    }

                }



                void transfer_digits(int& a, int& b, int k)

                {

                    string numA = to_string(a);

                    string numB = to_string(b);

                    if (k > numA.size()) return;

                    string transfer = numA.substr(numA.size() - k);

                    numA = numA.substr(0, numA.size() - k);

                    numB = transfer + numB;

                    a = stoi(numA);

                    b = stoi(numB);

                }





                bool isLeapYear(int year)

                {

                    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

                }



                void nextDay(int& day, int& month, int& year)

                {

                    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

                    if (isLeapYear(year)) daysInMonth[2] = 29;



                    day++;

                    if (day > daysInMonth[month])

                    {

                        day = 1;

                        month++;

                        if (month > 12)

                        {

                            month = 1;

                            year++;

                        }

                    }

                }



                void date(int day, int month, int year, int n)

                {

                    while (n-- > 0)

                    {

                        nextDay(day, month, year);

                    }

                    cout << day << " " << month << " " << year << endl;

                }



                int main()

                {

                    // functions from practicum 05

                }*/

/*Practicum 06

int first_repeating_el(const int arr[], int n)

                {

                    for (int i = 0; i < n; ++i) {

                        for (int j = i + 1; j < n; ++j) {

                            if (arr[i] == arr[j]) {

                                return arr[i];

                            }

                        }

                    }

                    return -1;

                }



bool is_symmetric(const int arr[], int n)

                {

                    for (int i = 0; i < n / 2; ++i)

                    {

                        if (arr[i] != arr[n - i - 1])

                        {

                            return false;

                        }

                    }

                    return true;

                }



void reverse_first_half(int arr[], int n)

                {

                    int mid = n / 2;

                    for (int i = 0; i < mid / 2; i++)

                    {

                        swap(arr[i], arr[mid - i - 1]);

                    }

                }



void remov_el(int arr[], int& n, int index)

                {

                    if (index >= 0 && index < n)

                    {

                        for (int i = index; i < n - 1; ++i)

                        {

                            arr[i] = arr[i + 1];

                        }

                        arr[n - 1] = -1;

                        --n;

                    }

                }


int find_number(const int arr[], int n)

                {

                    int expectedSum = (n * (n + 1)) / 2;

                    int actualSum = 0;

                    for (int i = 0; i < n; i++)

                    {

                        actualSum += arr[i];

                    }

                    return expectedSum - actualSum;

                }



void count(const int arr[], int n)
                {
                    int counts[20] = { 0 };
                    for (int i = 0; i < n; i++)
                    {
                        if (arr[i] >= 0 && arr[i] < 20)
                        {
                            counts[arr[i]]++;
                        }
                    }
                    for (int i = 0; i < 20; i++)
                    {
                        cout << i << ": " << counts[i] << endl;
                    }
                }

bool is_sorted(const int arr[], int n)
                {
                    for (int i = 0; i < n - 1; ++i)
                    {
                        if (arr[i] > arr[i + 1])
                        {
                            return false;
                        }
                    }
                    return true;
                }

void zeroOutByIndex(int arr[], int n)

                {

                    for (int i = 0; i < n; ++i)

                    {

                        string numStr = to_string(arr[i]);

                        string idxStr = to_string(i);

                        if (numStr.find(idxStr) == string::npos)

                        {

                            arr[i] = 0;

                        }

                    }

                }



void zigzagArrangement(int arr[], int n) {

                    for (int i = 0; i < n - 1; ++i) {

                        if ((i % 2 == 0 && arr[i] > arr[i + 1]) || (i % 2 == 1 && arr[i] < arr[i + 1])) {

                            swap(arr[i], arr[i + 1]);

                        }

                    }

                }

                
                
 void incrementNumber(int arr[], int n) {

                    for (int i = n - 1; i >= 0; --i) {

                        if (++arr[i] < 10) return;

                        arr[i] = 0;

                    }

                    cout << "1 ";

                    for (int i = 0; i < n; ++i) {

                        cout << arr[i] << " ";

                    }

                    cout << endl;

                }



int main()

                {

                    //functions from 06

                }*/

/*Practicum 7

                int findMinElement(int matrix[][100], int rows, int cols) {

                    int minElem = matrix[0][0];

                    for (int i = 0; i < rows; ++i) {

                        for (int j = 0; j < cols; ++j) {

                            if (matrix[i][j] < minElem) {

                                minElem = matrix[i][j];

                            }

                        }

                    }

                    return minElem;

                }



                void printDiagonals(int matrix[][100], int n) {

                    cout << "Main diagonal: ";

                    for (int i = 0; i < n; ++i) {

                        cout << matrix[i][i] << " ";

                    }

                    cout << endl << "Secondary diagonal: ";

                    for (int i = 0; i < n; ++i) {

                        cout << matrix[i][n - i - 1] << " ";

                    }

                    cout << endl;

                }



                void printZigzag(int matrix[][100], int rows, int cols) {

                    for (int i = 0; i < rows; ++i) {

                        if (i % 2 == 0) {

                            for (int j = 0; j < cols; ++j) {

                                cout << matrix[i][j] << " ";

                            }

                        }
                        else {

                            for (int j = cols - 1; j >= 0; --j) {

                                cout << matrix[i][j] << " ";

                            }

                        }

                        cout << endl;

                    }

                }



                bool isTriangular(int matrix[][100], int n) {

                    for (int i = 1; i < n; ++i) {

                        for (int j = 0; j < i; ++j) {

                            if (matrix[i][j] != 0) {

                                return false;

                            }

                        }

                    }

                    return true;

                }



                void transposeMatrix(int matrix[][100], int n) {

                    for (int i = 0; i < n; ++i) {

                        for (int j = i + 1; j < n; ++j) {

                            swap(matrix[i][j], matrix[j][i]);

                        }

                    }

                }



                bool isMagicSquare(int matrix[][100], int n) {

                    int sum = 0;

                    for (int j = 0; j < n; ++j) {

                        sum += matrix[0][j];

                    }



                    for (int i = 0; i < n; ++i) {

                        int rowSum = 0, colSum = 0;

                        for (int j = 0; j < n; ++j) {

                            rowSum += matrix[i][j];

                            colSum += matrix[j][i];

                        }

                        if (rowSum != sum || colSum != sum) {

                            return false;

                        }

                    }



                    int mainDiag = 0, secDiag = 0;

                    for (int i = 0; i < n; ++i) {

                        mainDiag += matrix[i][i];

                        secDiag += matrix[i][n - i - 1];

                    }

                    return mainDiag == sum && secDiag == sum;

                }



                void addMatrices(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols)

                {

                    for (int i = 0; i < rows; ++i) {

                        for (int j = 0; j < cols; ++j) {

                            result[i][j] = matrix1[i][j] + matrix2[i][j];

                        }

                    }

                }



                void scalarMultiply(int matrix[][100], int result[][100], int rows, int cols, int scalar) {

                    for (int i = 0; i < rows; ++i) {

                        for (int j = 0; j < cols; ++j) {

                            result[i][j] = matrix[i][j] * scalar;

                        }

                    }

                }



                void multiplyMatrices(int matrix1[][100], int rows1, int cols1, int matrix2[][100], int rows2, int cols2, int result[][100]) {

                    for (int i = 0; i < rows1; ++i) {

                        for (int j = 0; j < cols2; ++j) {

                            result[i][j] = 0;

                            for (int k = 0; k < cols1; ++k) {

                                result[i][j] += matrix1[i][k] * matrix2[k][j];

                            }

                        }

                    }

                }



                void printSpiral(int matrix[][100], int rows, int cols) {

                    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

                    while (top <= bottom && left <= right) {

                        for (int i = left; i <= right; ++i) {

                            cout << matrix[top][i] << " ";

                        }

                        ++top;



                        for (int i = top; i <= bottom; ++i) {

                            cout << matrix[i][right] << " ";

                        }

                        --right;



                        if (top <= bottom) {

                            for (int i = right; i >= left; --i) {

                                cout << matrix[bottom][i] << " ";

                            }

                            --bottom;

                        }



                        if (left <= right) {

                            for (int i = bottom; i >= top; --i) {

                                cout << matrix[i][left] << " ";

                            }

                            ++left;

                        }

                    }

                    cout << endl;

                }



                void rotateMatrix(int matrix[][100], int n) {

                    transposeMatrix(matrix, n);

                    for (int i = 0; i < n; ++i) {

                        for (int j = 0; j < n / 2; ++j) {

                            swap(matrix[i][j], matrix[i][n - j - 1]);

                        }

                    }

                }



                int main()

                {

                    //functions from 07

                }*/
/*Practicum 8

                int reverseRightmostBit(int n)

                {

                    return n & (n - 1);

                }

                int extract(int n, int k)

                {

                    return n & ((1 << k) - 1);

                }

                bool isBinarySubstring(int n, int k)

                {

                    while (n >= k)

                    {

                        if ((n & ((1 << (int)log2(k) + 1) - 1)) == k)

                        {

                            return true;

                        }

                        n >>= 1;

                    }

                    return false;

                }

                int findUniqueNumber(int arr[], int size) {

                    int result = 0;

                    for (int i = 0; i < size; ++i) {

                        result ^= arr[i];

                    }

                    return result;

                }

                void printSubsets(int arr[], int size) {

                    int totalSubsets = 1 << size;

                    for (int i = 0; i < totalSubsets; ++i) {

                        cout << "[";

                        for (int j = 0; j < size; ++j) {

                            if (i & (1 << j)) {

                                cout << arr[j] << (j < size - 1 ? ", " : "");

                            }

                        }

                        cout << "]" << endl;

                    }

                }

                int extractBitsFromPosition(int x, int m, int n) {

                    return (x >> m) & ((1 << n) - 1);

                }

                int setBit(int n, int p, int b) {

                    if (b) {

                        return n | (1 << p);

                    }
                    else {

                        return n & ~(1 << p);

                    }

                }

                int toggleBit(int n, int p) {

                    return n ^ (1 << p);

                }

                int main()

                {

                    // functions from 08

                }*/ 

/*
Practicum 09
               int countOnes(int n) 
               {

                    int count = 0;

                    while (n > 0) {

                        count += n & 1;

                        n >>= 1;

                    }

                    return count;

                }

                int ternaryToOctal(int ternary) {

                    int decimal = 0, base = 1;

                    while (ternary > 0) {

                        decimal += (ternary % 10) * base;

                        base *= 3;

                        ternary /= 10;

                    }

                    int octal = 0, power = 1;

                    while (decimal > 0) {

                        octal += (decimal % 8) * power;

                        power *= 10;

                        decimal /= 8;

                    }

                    return octal;

                }

                int octalToTernary(int octal) {

                    int decimal = 0, base = 1;

                    while (octal > 0) {

                        decimal += (octal % 10) * base;

                        base *= 8;

                        octal /= 10;

                    }

                    int ternary = 0, power = 1;

                    while (decimal > 0) {

                        ternary += (decimal % 3) * power;

                        power *= 10;

                        decimal /= 3;

                    }

                    return ternary;

                }

                void printBinary(int n) {

                    for (int i = 31; i >= 0; --i) {

                        cout << ((n >> i) & 1);

                        if (i % 8 == 0 && i != 0) cout << ' ';

                    }

                    cout << endl;

                }

                int main()
                {
                    //functions from 09
                }*/
      

/*Practicum 10
                int countOccurrences(char str[], char c) {

                    int count = 0;

                    for (int i = 0; str[i] != '\0'; ++i) {

                        if (str[i] == c) {

                            ++count;

                        }

                    }

                    return count;

                }



                void extractLowercase(char input[], char result[]) {

                    int j = 0;

                    for (int i = 0; input[i] != '\0'; ++i) {

                        if (input[i] >= 'a' && input[i] <= 'z') {

                            result[j++] = input[i];

                        }

                    }

                    result[j] = '\0';

                }



                void substring(char str[], int beg, int end, char result[]) {

                    int length = 0;

                    for (; str[length] != '\0'; ++length);



                    if (beg >= length) {

                        result[0] = '\0';

                        return;

                    }



                    if (end >= length) {

                        end = length - 1;

                    }



                    int j = 0;

                    for (int i = beg; i <= end; ++i) {

                        result[j++] = str[i];

                    }

                    result[j] = '\0';

                }





                int compareStrings(char str1[], char str2[]) {

                    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i) {

                        if (str1[i] < str2[i]) return -1;

                        if (str1[i] > str2[i]) return 1;

                    }

                    return 0;

                }



                void replaceOddEven(char str[], char x, char a, char b) {

                    int count = 0;

                    for (int i = 0; str[i] != '\0'; ++i) {

                        if (str[i] == x) {

                            str[i] = (count++ % 2 == 0) ? a : b;

                        }

                    }

                }



                void longestCommonPrefix(char str1[], char str2[], char str3[], char result[]) {

                    int i = 0;

                    while (str1[i] != '\0' && str2[i] != '\0' && str3[i] != '\0' &&

                        str1[i] == str2[i] && str2[i] == str3[i]) {

                        result[i] = str1[i];

                        ++i;

                    }

                    result[i] = '\0';

                }



                void countDigits(char str[], char result[]) {

                    int counts[10] = { 0 };

                    for (int i = 0; str[i] != '\0'; ++i) {

                        if (str[i] >= '0' && str[i] <= '9') {

                            counts[str[i] - '0']++;

                        }

                    }



                    int j = 0;

                    for (int i = 0; i < 10; ++i) {

                        if (counts[i] > 0) {

                            if (j > 0) {

                                result[j++] = ',';

                            }

                            result[j++] = counts[i] + '0';

                            result[j++] = 'x';

                            result[j++] = i + '0';

                        }

                    }

                    result[j] = '\0';

                }



                void uniqueCharacters(char str1[], char str2[], char result[]) {

                    bool unique[256] = { false };



                    for (int i = 0; str1[i] != '\0'; ++i) {

                        unique[str1[i]] = true;

                    }



                    for (int i = 0; str2[i] != '\0'; ++i) {

                        if (unique[str2[i]]) {

                            unique[str2[i]] = false;

                        }
                        else {

                            unique[str2[i]] = true;

                        }

                    }



                    int j = 0;

                    for (int i = 0; i < 256; ++i) {

                        if (unique[i]) {

                            result[j++] = i;

                        }

                    }

                    result[j] = '\0';

                }



                void removeDuplicates(char str[], char result[]) {

                    bool seen[256] = { false };

                    int j = 0;

                    for (int i = 0; str[i] != '\0'; ++i) {

                        if (!seen[str[i]]) {

                            seen[str[i]] = true;

                            result[j++] = str[i];

                        }

                    }

                    result[j] = '\0';

                }



                int findchar text[], char word[]) {

                    int textLen = 0, wordLen = 0;

                    for (; text[textLen] != '\0'; ++textLen);

                    for (; word[wordLen] != '\0'; ++wordLen);



                    for (int i = 0; i <= textLen - wordLen; ++i) {

                        bool match = true;

                        for (int j = 0; j < wordLen; ++j) {

                            if (text[i + j] != word[j]) {

                                match = false;

                                break;

                            }

                        }

                        if (match) {

                            return i;

                        }

                    }

                    return -1;
}

int count(char text[], char substring[]) {

    int count = 0;

    int textLen = 0, subLen = 0;

    for (; text[textLen] != '\0'; ++textLen);

    for (; substring[subLen] != '\0'; ++subLen);



    for (int i = 0; i <= textLen - subLen; ++i) {

        bool match = true;

        for (int j = 0; j < subLen; ++j) {

            if (text[i + j] != substring[j]) {

                match = false;

                break;

            }

        }

        if (match) {

            ++count;

        }

    }

    return count;

}



void replace_with_asterisks(char text[], char substring[], char result[]) 
{
    int textLen = 0, subLen = 0;
    for (; text[textLen] != '\0'; ++textLen);
    for (; substring[subLen] != '\0'; ++subLen);
    
    int i = 0, j = 0;

    while (i < textLen) {

        bool match = true;

        if (i <= textLen - subLen) {

            for (int k = 0; k < subLen; ++k) {

                if (tolower(text[i + k]) != tolower(substring[k])) {

                    match = false;

                    break;
                }
            }
        }
        else 
        {
            match = false;
        }
        if (match) 
        {
            for (int k = 0; k < subLen; ++k) 
            {
                result[j++] = '*';
            }
            i += subLen;
        }
        else 
        {
            result[j++] = text[i++];
        }
    }
    result[j] = '\0';
}
int main()
{
    //functions from 10
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
