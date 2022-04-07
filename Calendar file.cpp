#include <iostream>
#include <cstdlib>
#include <iomanip>
 
using namespace std;
 
 
int fday_year_and_month (int );
int days_in_month (int); 
void headder (int); 
void month (int, int&); 
void to_day (int);
 
 
int main () 
{
   
    int year, current_month_firstday;
    int currentMonth = 1;
    int numDays;
   
    cout << "Please enter the year:  ";
    cin >>year;
    
    cout<<endl;
    
    current_month_firstday=fday_year_and_month(year);
   
    cout << year << endl;
    
    while (currentMonth <= 12) {
        numDays = days_in_month(currentMonth);
        headder(currentMonth);
        month(numDays, current_month_firstday);
        cout << endl << endl << endl;
        currentMonth = currentMonth + 1;
    }
    
    cout << endl;
    
     system("PAUSE");
    return EXIT_SUCCESS;
}
 
    int  fday_year_and_month(int year) { 
        int day_start; 
        int x1, x2, x3; 
        x1 = (year - 1)/ 4;
        x2 = (year - 1)/ 100; 
        x3 = (year - 1)/ 400; 
        day_start = (year + x1 - x2 + x3) %7; 
        return day_start; 
    } 
 
    int days_in_month (int m){
        if (m == 1) 
           return(31);
        else if (m == 2) 
             return(28);  
        else if (m == 3) 
             return(31);
        else if (m == 4) 
             return(30);
        else if (m == 5) 
             return(31);
        else if (m == 6) 
             return(30);
        else if (m == 7) 
             return(31);
        else if (m == 8) 
            return(31);
        else if (m == 9) 
            return(30);
        else if (m == 10) 
            return(31);
        else if (m == 11) 
            return(30);
        else if (m == 12) 
            return(31);
    }
 
    void headder (int m) {
        if (m == 1){ 
    
    cout << "January" << endl;
    }
    else if (m == 2) { 
         cout << "February" << endl; } 
    else if (m == 3) {     
         cout << "March" << endl; }
    else if (m == 4) {  
         cout << "April" << endl; }
    else if (m == 5) {  
         cout << "May" << endl; }
    else if (m == 6) {  
         cout << "June" << endl; }
    else if (m == 7) {  
         cout << "July" << endl; }
    else if (m == 8) { 
         cout << "August" << endl; }
    else if (m == 9) {  
         cout << "September" << endl; }
    else if (m == 10) {  
         cout << "October" << endl; }
    else if (m == 11) {  
         cout << "November" << endl; }
    else if (m == 12) {  
         cout << "December" << endl; }
    
 
    cout << " S  M  T  W  T  F  S" <<endl;
    cout << "_____________________" << endl;
    }
 
    void next (int i) {
        while (i > 0) {
            cout << " ";
            i = i - 1;
        }
    }
 
 
    void month (int numDays, int &weekDay) {
        int day = 1;
        to_day(weekDay);
        while (day <= numDays) {
            cout << setw(2) << day << " ";
            if (weekDay == 6){
                cout << endl;
                weekDay = 0;
            }
        else weekDay = weekDay + 1;
        day = day + 1; 
        }
    }
    
 
    void to_day (int d){
        return next(3*d);
    }
    