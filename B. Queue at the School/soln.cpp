 #include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no_of_people, time;
    string school_queue;
    cin >> no_of_people >> time >> school_queue;

    for(int i = 1; i <= time; i++)
    {
        for(int person = 0; person < no_of_people; person++)
        {
            if(school_queue[person] == 'B' && school_queue[person + 1] == 'G')
            {
                swap(school_queue[person], school_queue[person + 1]);
                person++;
            }
        }
    }

    cout << school_queue;
    return 0;
}