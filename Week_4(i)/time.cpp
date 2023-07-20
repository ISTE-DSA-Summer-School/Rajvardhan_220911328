#include <iostream>
using namespace std;

class time
{
private:
    int hour;
    int min;
    int sec;
public:
    void getTime()
    {
        cout<<"Enter hours "<<endl;
        cin>>hour;
        cout<<"Enter mins "<<endl;
        cin>>min;
        cout<<"Enter seconds "<<endl;
        cin>>sec;
    }
    void displayTime()
    {
        cout<<"Hours : "<<hour<<" Minutes "<<min<<" seconds "<<sec;
    }
    time addTime(time t)
    {
        time result;
        result.hour = hour + t.hour;
        result.min = min + t.min;
        result.sec = sec+t.sec;
        if(result.sec>=60)
        {
            result.sec-=60;
            result.min++;
        }
        if(result.min>=60)
        {
            result.min-=60;
            result.hour++;
        }
        return result;
    }

    time diffTime(time t)
    {
        time result;
        int totalsec = (hour - t.hour) * 3600 + (min - t.min) * 60 + (sec - t.sec);
        if(totalsec<0)
        {
            totalsec+=24*3600;
        }
        if(totalsec>24*3600)
        {
            totalsec-=24*3600;
        }
        result.hour = totalsec/3600;
        totalsec = totalsec%3600;
        result.min = totalsec/60;
        result.sec = totalsec%60;

        return result;
    }
};

int main()
{
    time t1,t2;
    cout<<"enter time one: "<<endl;
    t1.getTime();
    cout<<"Enter time two: "<<endl;
    t2.getTime();

    time sum = t1.addTime(t2);
    time diff = t1.diffTime(t2);

    cout<<"Time 1 : "<<endl;
    t1.displayTime();

    cout<<endl<<"Time 2 : "<<endl;
    t2.displayTime();

    cout<<endl<<"SUm of time : "<<endl;
    sum.displayTime();

    cout<<endl<<"Difference of time: "<<endl;
    diff.displayTime();
}

