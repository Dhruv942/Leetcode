class Solution {
public:
 bool isLeapYear(int year) {
        return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    }
    int dayOfYear(string date) {
          vector<int> mnthDays { 31,28,31,30,31,30,31,31,30,31,30,31 };
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        for (int i = 0; i + 1 < month; i ++)
            day += mnthDays[i];
        if (isLeapYear(year) && month > 2)
            day += 1;
        return day;
    }
};
