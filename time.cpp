#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    time_t myTime;
    time(&myTime);
    cout<<myTime<<endl;

    //Decoding this value in a Standard Time Format
    string realTime = ctime(&myTime);
    cout<<realTime<<endl;
    //Splitting this Date and Time in Hours, Minutes, Seconds, etc
    struct tm *ltime = localtime(&myTime);
    cout<<ltime->tm_hour<<endl;
    cout<<ltime->tm_min<<endl;
}

/*

#include<stdio.h>
#include<time.h>
#include<string.h>

int main()
{
    time_t myTime = time(NULL);
    struct tm *localtm;
    localtm = localtime(&myTime);
    printf("%d\n",myTime);
    printf("%s",ctime(&myTime));
    printf("\n%d %d",localtm->tm_hour,localtm->tm_min);
    return 0;
}

*/