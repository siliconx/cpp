#include <iostream>
#include "tv.h"

int main() {
    using std::cout;

    Tv t;

    cout << "Initial settings for 42\" TV:\n";
    t.settings();

    t.onoff();
    t.settings();

    t.chanup();
    cout << "Adajusted settings for 42\" TV:\n";
    t.settings();

    t.chanup();
    cout << "Adajusted settings for 42\" TV:\n";
    t.settings();

    Remote g;
    g.set_chan(t, 10);
    g.volup(t);
    cout << "settings after using remte:\n";
    t.settings();
}
