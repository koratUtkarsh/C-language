#include <iostream>

using namespace std;

class Railway
{
public:
    int tno;
    char tname[90], source[90], desti[90];
    float time;

    void setdata()
    {
        cout << "<><><><><><><><><><><><><> RAILWAY DETAILS <><><><><><><><><><><><><><><><>" << endl;
        cout << endl;
        cout << "Enter The Train Number          :~";
        cin >> tno;
        cout << "Enter The Train Name            :~";
        cin >> tname;
        cout << "Enter The Train Source          :~";
        cin >> source;
        cout << "Enter The Train destination     :~";
        cin >> desti;
        cout << "Enter The Train Time            :~";
        cin >> time;
        cout << endl;
        cout << "<><><><><><><><><><><><><><> EXPRESS TRAINS <><><><><><><><><><><><><><><><><>" << endl;
        cout << endl;
        cout << endl;
    }
    void getdata(int tn)
    {
        if (tn == tno)
        {
            cout << " <><><><><><><><><><><><><><> RAILWAY STATION  <><><><><><><><><><><><><><>" << endl;
            cout << endl;
            cout << "Your Train Number Is           :~" << tno << endl;
            cout << "Your Train Name Is             :~" << tname << endl;
            cout << "Your Train Source Is           :~" << source << endl;
            cout << "Your Train Destination Is      :~" << desti << endl;
            cout << "Your Train Time Is             :~" << time << endl;
            cout << endl;
            cout << "<><><><><><><><><><><><><><>  TRAIN TICKET'S  <><><><><><><><><><><><><><>" << endl;
            cout << endl;
            cout << endl;
        }
    }
};

int main()
{
    cout << "#########################  RAILWAY STATION  #########################" << endl;
    cout << "<><><><><><><><><><><><><><>  EXPRESS TRAIN  <><><><><><><><><><><><><><>" << endl;
    cout << endl;
    cout << endl;

    Railway r1[10];
    int s, tn;
    for (s = 0; s < 3; s++)
    {
        r1[s].setdata();
    }
    cout << "Enter The Train Number You Want To Travel:~";
    cin >> tn;
    cout << endl;
    for (s = 0; s < 3; s++)
    {
        r1[s].getdata(tn);
    }
    cout << "<*><*><*><*><*><*><*><*><*><*><*><*>THANK YOU<*><*><*><*><*><*><*><*><*><*><*<*>" << endl;
    cout << endl;
    cout << "                               <><><><> VISIT AGAIN <><><><><>                              " << endl;
}